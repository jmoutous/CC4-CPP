/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:00:40 by jmoutous          #+#    #+#             */
/*   Updated: 2023/11/30 10:35:04 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
	std::cout << "ScalarConverter's default constructor called" << std::endl;
};

ScalarConverter::ScalarConverter( ScalarConverter const & source ) {
	std::cout << "ScalarConverter's copy constructor called" << std::endl;

		*this = source;
};

ScalarConverter::~ScalarConverter() {
	std::cout << "ScalarConverter's destructor called" << std::endl;
};

ScalarConverter & ScalarConverter::operator=( ScalarConverter const & rhs ) {
	if (this != &rhs)
{
		//copy every private attributes
}

	return (*this);
};

static bool	isChar( std::string toBeConverted )
{
	if (isalpha(toBeConverted[0]) && toBeConverted.length() == 1)
		return (true);
	return (false);
}

static void	itIsChar( std::string toBeConverted )
{
	char c = toBeConverted[0];

	std::cout << "Char detected!\n" << std::endl;

	std::cout << "char: " << static_cast<char>(c) << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

static bool	isInt( std::string toBeConverted )
{
	int	i = 0;

	if (toBeConverted[i] == '+' || toBeConverted[i] == '-')
		i++;
	while (isdigit(toBeConverted[i]))
		i++;
	if (toBeConverted[i])
		return (false);
	
	long int	li = strtol(toBeConverted.c_str(), NULL, 10);

	if (li < -2147483648 || li > 2147483647 || toBeConverted.length() > 11)
		return (false);

	return (true);
}

static void	itIsInt( std::string toBeConverted )
{
	long int	i = strtol(toBeConverted.c_str(), NULL, 10);

	std::cout << "Int detected!\n" << std::endl;

	std::cout << "char: ";
	if (isprint(static_cast<char>(i)))
		std::cout << '\'' << static_cast<char>(i) << '\'' << std::endl;
	else
		std::cout << "Non displayable" << std::endl;

	std::cout << "int: " << static_cast<int>(i) << std::endl;
	std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
}

static bool	isFloat( std::string toBeConverted )
{
	int	i = 0;

	if (toBeConverted[i] == '+' || toBeConverted[i] == '-')
		i++;
		
	while (isdigit(toBeConverted[i]))
		i++;

	if (toBeConverted[i] != '.')
		return (false);
	i++;

	if (!isdigit(toBeConverted[i]))
		return (false);

	while (isdigit(toBeConverted[i]))
		i++;
	if (toBeConverted[i] != 'f' || toBeConverted[i + 1])
		return (false);
	return (true);
}

static void	itIsFloat( std::string toBeConverted )
{
	float	i = strtof(toBeConverted.c_str(), NULL);

	std::cout << "Float detected!\n" << std::endl;
	
	std::cout << "char: ";
	if (i < -2147483648.0f || i > 2147483647.0f)
		std::cout << "impossible" << std::endl;
	else if (isprint(static_cast<char>(i)))
		std::cout << '\'' << static_cast<char>(i) << '\'' << std::endl;
	else
		std::cout << "Non displayable" << std::endl;

	std::cout << "int: ";
	if (i < -2147483648.0f || i > 2147483647.0f || toBeConverted.length() > 11)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(i) << std::endl;

	std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << std::endl;
}

static bool	isDouble( std::string toBeConverted )
{
	int	i = 0;

	if (toBeConverted[i] == '+' || toBeConverted[i] == '-')
		i++;
		
	while (isdigit(toBeConverted[i]))
		i++;

	if (toBeConverted[i] != '.')
		return (false);
	i++;

	if (!isdigit(toBeConverted[i]))
		return (false);

	while (isdigit(toBeConverted[i]))
		i++;
	if (toBeConverted[i])
		return (false);

	return (true);
}

static void	itIsDouble( std::string toBeConverted )
{
	float	i = strtod(toBeConverted.c_str(), NULL);

	std::cout << "Double detected!\n" << std::endl;
	
	std::cout << "char: ";
	if (i < -2147483648.0f || i > 2147483647.0f)
		std::cout << "impossible" << std::endl;
	else if (isprint(static_cast<char>(i)))
		std::cout << '\'' << static_cast<char>(i) << '\'' << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
	
	std::cout << "int: ";
	if (i < -2147483648.0f || i > 2147483647.0f || toBeConverted.length() > 11)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(i) << std::endl;

	std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << std::endl;
}

void	ScalarConverter::convert( std::string toBeConverted )
{
	std::string	pseudo[3] = {"-inf", "+inf", "nan"};

	for (int a = 0; a < 3; ++a)
	{
		if (toBeConverted == pseudo[a])
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: " << pseudo[a] << "f" << std::endl;
			std::cout << "double: " << pseudo[a] << std::endl;
			return ;
		}
	}

	if (isChar(toBeConverted))
		itIsChar(toBeConverted);
	else if (isInt(toBeConverted))
		itIsInt(toBeConverted);
	else if (isFloat(toBeConverted))
		itIsFloat(toBeConverted);
	else if (isDouble(toBeConverted))
		itIsDouble(toBeConverted);
	else
		std::cout << "Unknown literal!"<< std::endl;
};
