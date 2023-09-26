/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:53:10 by jmoutous          #+#    #+#             */
/*   Updated: 2023/09/26 14:40:10 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {
	std::cout << "HumanB constructor called" << std::endl;
}

HumanB::HumanB(std::string name, Weapon *weapon) : _name(name), _weapon(weapon) {
	std::cout << "HumanB constructor called" << std::endl;
}

HumanB::~HumanB() {
	std::cout << "HumanB destructor called" << std::endl;
}

void	HumanB::attack() const {
	if (!this->_weapon)
		std::cout << this->_name << " attacks with their fists" << std::endl;
	else
		std::cout << this->_name << " attacks with "
			<< this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}
