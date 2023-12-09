/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 09:35:58 by jmoutous          #+#    #+#             */
/*   Updated: 2023/12/09 16:05:16 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main (int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage: ./convert <char, int, float or double>" << std::endl;
		return (1);
	}

	ScalarConverter::convert(av[1]);

	return (0);
}