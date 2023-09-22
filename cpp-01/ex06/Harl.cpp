/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 15:07:39 by jmoutous          #+#    #+#             */
/*   Updated: 2023/09/22 20:33:07 by jmoutous         ###   ########lyon.fr   */
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
	std::string	message[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*function[4])(void) const = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++) {
		if(level == message[i]) {
			while (i < 4) {
				(this->*(function[i]))();
				i++;
			}
			return;
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
