/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:01:42 by jmoutous          #+#    #+#             */
/*   Updated: 2023/09/18 14:06:45 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {
	std::cout << "Weapon constructor called" << std::endl;
}

Weapon::~Weapon() {
	std::cout << "Weapon destructor called" << std::endl;
}

std::string	Weapon::getType() const {
	return this->type;
}

void	Weapon::setType( std::string newType ){
	this->type = newType;
}
