/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:10:19 by jmoutous          #+#    #+#             */
/*   Updated: 2023/09/22 18:15:19 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _name("Zombie") {
	std::cout << "Zombie's default constructor called\n" << std::endl;
}

Zombie::Zombie(std::string	name) {
	this->_name = name;
	std::cout << "Zombie constructor called for " << this->_name << "\n" << std::endl;
}

Zombie::~Zombie() {
	if (this->_name != "Zombie")
		std::cout << "\nZombie destructor called for " << this->_name << std::endl;
	else
		std::cout << "\nZombie destructor called" << std::endl;
}

void	Zombie::announce( void ) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName( std::string	name ) {
	this->_name = name;
}
