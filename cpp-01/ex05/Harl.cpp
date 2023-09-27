/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 15:07:39 by jmoutous          #+#    #+#             */
/*   Updated: 2023/09/26 18:16:29 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
	std::cout << "Harl's default constructor called\n" << std::endl;
}

Harl::~Harl() {
	std::cout << "\nHarl's default destructor called" << std::endl;
}

void	Harl::debug( void ) const {
	std::cout << "DEBUG:\n\"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\"" << std::endl;
}
void	Harl::info( void ) const {
	std::cout << "INFO:\n\"I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\""<< std::endl;
}
void	Harl::warning( void ) const {
	std::cout << "WARNING:\n\"I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\"" << std::endl;
}
void	Harl::error( void ) const {
	std::cout << "ERROR:\n\"This is unacceptable! I want to speak to the manager now.\"" << std::endl;
}

void	Harl::complain( std::string level ) const {
	function 		f[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string		message[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++) {
		if(level == message[i]) {
			(this->*(f[i]))();
			return;
		}
	}
	std::cerr << "Error: invalid option" << std::endl;
}
