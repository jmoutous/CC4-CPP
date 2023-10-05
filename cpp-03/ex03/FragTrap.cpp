/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:09:54 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/05 13:52:07 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "FragTrap's default constructor called" << std::endl;
	this->_health = 100;
	this->_energy = 100;
	this->_attack = 30;
};

FragTrap::FragTrap( std::string name ) : ClapTrap(name) {
	std::cout << "FragTrap's constructor called for  " << name << std::endl;
	this->_health = 100;
	this->_energy = 100;
	this->_attack = 30;
};

FragTrap::FragTrap( FragTrap const & source ) {
	std::cout << "FragTrap's copy constructor called on " << source.getName() << std::endl;

	*this = source;
};

FragTrap::~FragTrap() {
	std::cout << "FragTrap's destructor called for " << this->getName() << std::endl;
};

FragTrap & FragTrap::operator=( FragTrap const & rhs ) {
	if(&rhs == this)
		return (*this);
	
	std::cout << "FragTrap's operator= called on " << rhs.getName() << std::endl;
	this->_name = rhs._name;
	this->_health = rhs._health;
	this->_energy = rhs._energy;
	this->_attack = rhs._attack;

	return (*this);
};

void	FragTrap::highFivesGuys( void ) {
	std::cout << "FragTrap " << this->getName() << " is asking for some high fives!" << std::endl;
}
