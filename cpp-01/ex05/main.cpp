/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 15:07:17 by jmoutous          #+#    #+#             */
/*   Updated: 2023/09/22 20:35:16 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char** av) {
	if(ac != 2) {
		std::cerr << "Error: Usage: ./Harl <string>\nstring option: 'DEBUG', 'INFO', 'WARNING' or 'ERROR'" << std::endl;
		return 1;
	}

	std::string	level = av[1];
	Harl		test;

	test.complain(level);
	return 0;
}