/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 09:35:58 by jmoutous          #+#    #+#             */
/*   Updated: 2023/11/30 10:03:48 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main (int ac, char **av)
{
	ScalarConverter::convert(av[1]);
	(void) ac;

	return (0);
}