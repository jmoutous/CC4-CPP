/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:09:35 by jmoutous          #+#    #+#             */
/*   Updated: 2024/02/12 13:52:59 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main( int ac, char **av )
{
	if ( ac != 2 )
	{
		std::cout << "Error\nUsage: btc inputfile.txt" << std::endl;
		return (1);
	}

	try
	{
		std::map<std::string, float>	dataBase = getDataBase(); 
		(void)av;
	}
	catch ( std::exception & e)
	{
		std::cout << e.what() << std::endl;
		return (1);
	}

	return (0);
}