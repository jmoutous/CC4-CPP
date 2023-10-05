/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:11:04 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/05 14:55:53 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "ScavTrap's default constructor called" << std::endl;
	this->_health = 100;
	this->_energy = 50;
	this->_attack = 20;
};

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name) {
	std::cout << "ScavTrap's constructor called for " << name << std::endl;
	this->_health = 100;
	this->_energy = 50;
	this->_attack = 20;
};

ScavTrap::ScavTrap( ScavTrap const & source ) {
	std::cout << "ScavTrap's copy constructor called on " << source.getName() << std::endl;
	*this = source;
};

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap's destructor called for " << this->getName() << std::endl;
};

ScavTrap & ScavTrap::operator=( ScavTrap const & rhs ) {
	if(&rhs == this)
		return (*this);
	
	std::cout << "ScavTrap's operator= called on " << rhs.getName() << std::endl;
	this->_name = rhs._name;
	this->_health = rhs._health;
	this->_energy = rhs._energy;
	this->_attack = rhs._attack;

	return (*this);
};

void	ScavTrap::attack( const std::string& target ) {
	if(this->_health <= 0){
		std::cout << "ScavTrap " << this->_name << " is permanently disabled and can't attack!" << std::endl;
		return ;
	}

	if(this->_energy <= 0){
		std::cout << "ScavTrap " << this->_name << " has no more energy and can't attack!" << std::endl;
		return ;
	}

	this->_energy--;
	std::cout << "ScavTrap " << this->_name << " attacks "
		<< target << ", causing " << this->_attack << " points of damage !" << std::endl;
}

void	ScavTrap::showStatus( void ) {
	std::cout << "\nScavTrap " << this->getName() << "'s status :\n"; 
	std::cout << "Hit points :    " << this->getHealth() << "\n";
	std::cout << "Energy points : " << this->getEnergy() << "\n";
	std::cout << "Attack damage : " << this->getAttack() << "\n" << std::endl;
}

void	ScavTrap::guardGate( void ) {
	std::cout << "ScavTrap " << this->getName() << " is now in Gate kepper mode!" << std::endl;
}