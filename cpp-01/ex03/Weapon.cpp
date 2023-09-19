/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:01:42 by jmoutous          #+#    #+#             */
/*   Updated: 2023/09/19 14:27:44 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {
	std::cout << "Weapon constructor called" << std::endl;
}

Weapon::Weapon(std::string type) : _type(type) {
	std::cout << "Weapon constructor called for " << _type << std::endl;
}

Weapon::~Weapon() {
	std::cout << "Weapon destructor called" << std::endl;
}

std::string	Weapon::getType() const {
	return this->_type;
}

void	Weapon::setType( std::string newType ){
	this->_type = newType;
}
