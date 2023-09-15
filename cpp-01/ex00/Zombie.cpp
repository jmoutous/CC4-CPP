/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:10:19 by jmoutous          #+#    #+#             */
/*   Updated: 2023/09/15 15:43:33 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : name("Zombie") {
	std::cout << "Zombie constructor called" << std::endl;
}

Zombie::Zombie(std::string	name) {
	std::cout << "Zombie constructor called for " << name << std::endl;
	this->name = name;
}

Zombie::~Zombie() {
	if (name != "Zombie")
		std::cout << "Zombie destructor called for " << name << std::endl;
	else
		std::cout << "Zombie destructor called" << std::endl;
}

void	Zombie::announce( void ) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
