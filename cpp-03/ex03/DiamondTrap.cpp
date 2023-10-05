/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:11:02 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/05 14:21:04 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap() {
	std::cout << "DiamondTrap's default constructor called" << std::endl;
	this->_energy = 50;
};

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name") {
	std::cout << "DiamondTrap's constructor called for " << name << std::endl;
	this->_name = name;
	this->_energy = 50;
};

DiamondTrap::DiamondTrap( DiamondTrap const & source ) {
	std::cout << "DiamondTrap's copy constructor called on " << source._name << std::endl;
	
	*this = source;
};

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap's destructor called for " << this->_name << std::endl;
};

DiamondTrap & DiamondTrap::operator=( DiamondTrap const & rhs ) {
	if(&rhs == this)
		return (*this);
	
	std::cout << "DiamondTrap's operator= called" << std::endl;
	this->_name = rhs._name;
	this->_health = rhs._health;
	this->_energy = rhs._energy;
	this->_attack = rhs._attack;

	return (*this);
};

void	DiamondTrap::whoAmI( void ) {
	std::cout << "My ClapTrap's name is " << ClapTrap::_name << "\n";
	std::cout << "And my DiamondTrap's name is " << DiamondTrap::_name << std::endl;
}