/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:07:43 by jmoutous          #+#    #+#             */
/*   Updated: 2023/09/19 16:50:56 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {
	std::cout << "HumanA constructor called" << std::endl;
}

HumanA::~HumanA() {
	std::cout << "HumanA destructor called" << std::endl;
}

void	HumanA::attack() const {
	std::cout << this->_name << " attacks with their "
		<< this->_weapon.getType() << std::endl;
}