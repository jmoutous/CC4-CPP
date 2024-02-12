/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:13:53 by jmoutous          #+#    #+#             */
/*   Updated: 2024/02/12 13:57:40 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::map<std::string, float>	getDataBase( void )
{
	std::map<std::string, float>	res;
	std::ifstream					dataBase("./data.csv");
	std::string						line;

	if (dataBase.fail())
		throw std::runtime_error("Error: could not open file.");
	
	while (std::getline(dataBase, line, '\n'))
	{
		size_t	coma = line.find(',');
		std::string	date = line.substr(0, coma);
		if (date.length() != 10)
			continue ;
		
		float		exchange_rate = atof(line.substr(coma + 1, line.length() - coma + 1).c_str());

		std::cout << "date:\t\t" << date << std::endl;
		std::cout << "exchange_rate: \t" << exchange_rate << "\n" << std::endl;
	}
	
	dataBase.close();
	return (res);
} 
