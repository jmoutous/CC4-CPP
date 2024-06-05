/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 17:15:01 by jmoutous          #+#    #+#             */
/*   Updated: 2024/02/15 11:37:19 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Error. Usage: ./RPN \"n1 n2 + ...\"\nYou must provide at least 2 numbers followed by an operation (+ - / *)" << std::endl;
		return (1);
	}

	try
	{
		calculate(av[1]);
	}
	catch( std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}