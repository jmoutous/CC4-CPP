/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 15:07:39 by jmoutous          #+#    #+#             */
/*   Updated: 2023/09/22 21:49:48 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){
	std::cout << "Harl's default constructor called\n" << std::endl;
}

Harl::~Harl(){
	std::cout << "\nHarl's default destructor called" << std::endl;
}

void	Harl::complain( std::string level ) const {
	typedef void	(Harl::*function[4])(void) const;
	function 		f = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string		message[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++) {
		if(level == message[i]) {
			(this->*(f[i]))();
			return;
		}
	}
	std::cerr << "Error: invalid option" << std::endl;
}
