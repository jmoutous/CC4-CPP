/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:13:53 by jmoutous          #+#    #+#             */
/*   Updated: 2024/02/14 17:08:43 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::map<std::string, double>	getDataBase( void )
{
	std::map<std::string, double>	res;
	std::ifstream					dataBase("./data.csv");
	std::string						line;

	if (dataBase.fail())
		throw std::runtime_error("Error: could not open data.csv");
	
	while (std::getline(dataBase, line, '\n'))
	{
		size_t	coma = line.find(',');
		std::string	date = line.substr(0, coma);
		if (date.length() != 10)
			continue ;
		
		double	exchange_rate = atof(line.substr(coma + 1, line.length() - coma + 1).c_str());

		res[date] = exchange_rate;
	}
	
	dataBase.close();
	return (res);
} 

static std::string	getToday( void )
{
	time_t	now = time(0);
	tm		*ltm = localtime(&now);
	char	thisDay[11];

	strftime(thisDay, 11, "%Y-%m-%d", ltm);
	
	return (thisDay);
}

static bool	isValidDate(int year, int month, int day)
{
	if (month > 12)
		return (false);

	switch (month)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			if (day > 31)
				return (false);
			break ;
		
		case 4: case 6: case 9: case 11:
			if (day > 30)
				return (false);
			break ;
		case 2:
			if (((year % 4 == 0) && (year % 100 !=0 )) || year % 400 == 0)
			{
				if (day > 29)
					return (false);
			}
			else if (day > 28)
				return (false);
	};
	
	return (true);
}

bool	checkDate( std::string & date )
{
	static std::string	thisDay = getToday();

	// Check date's length
	if (date.length() != 10)
		return (false);

	// Check date's format
	if (date.find('-') != 4 || date.find('-', 5) != 7 || date.find('-', 8) != date.npos)
		return (false);

	// Check if the date is valid
	int	year = atoi(date.substr(0, 4).c_str());
	int	month = atoi(date.substr(5, 2).c_str());
	int	day = atoi(date.substr(8, 2).c_str());

	if (isValidDate(year, month, day) == false)
		return (false);
	
	// Check if the date is in the future
	if (date.compare(thisDay.c_str()) > 0)
		return (false);
	
	return (true);
}

static long double applyRate( std::map<std::string, double> & database, std::string date, double bitcoin)
{
	long double	result = 0;
	long double	lastRate = -1;

	for (std::map<std::string, double>::iterator it = database.begin(); it != database.end(); ++it)
	{
		if (it->first == date)
		{
			result = it->second * bitcoin;
			break;
		}
		else if (it->first.compare(date) > 0)
		{
			if (lastRate < 0)
				throw std::runtime_error("Error: no previous exchange rate for this date in the database.");
			result = lastRate * bitcoin;
			break ;
		}
		else
			lastRate = it->second;
	}

	return (result);
}

void	process( char *infile, std::map<std::string, double> & dataBase )
{
	std::ifstream					inputFile(infile);
	std::string						line;

	if (inputFile.fail())
		throw std::runtime_error("Error: could not open the input.txt");
	
	while (std::getline(inputFile, line, '\n'))
	{
		if (line == "date | value" || line.empty())
			continue ;
		size_t	bar = line.find('|');
		std::string	date = line.substr(0, bar - 1);
		std::string	sBitcoin = line.substr(bar + 2, line.length() - bar + 1);

		if (bar == line.npos || sBitcoin.empty() || checkDate(date) == false)
		{
			std::cout << "Error: bad input => " << date << std::endl;
			continue ;
		}

		double		bitcoin = atof(sBitcoin.c_str());
		double		valueMax = 1000.0;

		if (bitcoin < 0)
		{
			std::cout << "Error: not a positive number." << std::endl;
			continue ;
		}

		if (bitcoin > valueMax)
		{
			std::cout << "Error: too large a number." << std::endl;
			continue ;
		}
		
		long double result;
		
		try
		{
			result = applyRate(dataBase, date, bitcoin);
			std::cout << date << " => " << bitcoin << " = " << result << std::endl;
		}
		catch ( const std::exception& e )
		{
			std::cout << e.what() << " => " << date << std::endl;
		}
	}
	
	inputFile.close();
}
