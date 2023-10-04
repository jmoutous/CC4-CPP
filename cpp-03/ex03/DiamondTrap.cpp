/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:11:02 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/04 17:10:11 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap() {
	std::cout << "DiamondTrap's default constructor called" << std::endl;
	ClapTrap::setEnergy(50);
	ClapTrap::setAttack(30);
};

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name") {
	std::cout << "DiamondTrap's constructor called for " << name << std::endl;
	this->_name = name;
	ClapTrap::setEnergy(50);
	ClapTrap::setAttack(30);
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
	ClapTrap::operator=(rhs);

	return (*this);
};

void 	DiamondTrap::attack( const std::string& target ) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI( void ) {
	std::cout << "My ClapTrap's name is " << this->getName() << "\n";
	std::cout << "And my DiamondTrap's name is " << _name << std::endl;
}