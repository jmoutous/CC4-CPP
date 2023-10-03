/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:10:33 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/03 13:15:28 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("NoName"), _health(10), _energy(10), _attack(0) {
	std::cout << "Default constructor called" << std::endl;
};

ClapTrap::ClapTrap( std::string name ) : _name(name), _health(10), _energy(10), _attack(0) {
	std::cout << "Constructor called" << std::endl;
};

ClapTrap::ClapTrap( ClapTrap const & source ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = source;
};

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
};

ClapTrap & ClapTrap::operator=( ClapTrap const & rhs ) {
	std::cout << "Operator= called" << std::endl;
	this->_name = rhs._name;
	this->_health = rhs._health;
	this->_energy = rhs._energy;
	this->_attack = rhs._attack;

	return (*this);
};

void	ClapTrap::showStatus( void ) {
	std::cout << "\nClapTrap " << this->_name << "'s status :\n"; 
	std::cout << "Hit points :    " << this->_health << "\n";
	std::cout << "Energy points : " << this->_energy << "\n";
	std::cout << "Attack damage : " << this->_attack << "\n" << std::endl;
}

void	ClapTrap::attack( const std::string& target ) {
	if(this->_health <= 0){
		std::cout << "ClapTrap " << this->_name << " is permanently disable and can't attack!" << std::endl;
		return ;
	}

	if(this->_energy <= 0){
		std::cout << "ClapTrap " << this->_name << " has no more energy and can't attack!" << std::endl;
		return ;
	}

	this->_energy--;
	std::cout << "ClapTrap " << this->_name << " attacks "
		<< target << ", causing " << this->_attack << " points of damage !" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount ) {
	this->_health -= amount;
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage";
	
	if (this->_health <= 0) {
		this->_health = 0;
		std::cout << " and are permanently disable";
	}
	std::cout << "!" << std::endl;
}	

void	ClapTrap::beRepaired( unsigned int amount ) {
	if(this->_health <= 0){
		std::cout << "ClapTrap " << this->_name << " is permanently disable and can't repair itself!" << std::endl;
		return ;
	}

	if(this->_energy <= 0){
		std::cout << "ClapTrap " << this->_name << " has no more energy and can't repair itself!" << std::endl;
		return ;
	}

	this->_health += amount;
	this->_energy--;
	std::cout << "ClapTrap " << this->_name << " repairs itself and get " << amount << " hit points back!" << std::endl;
}
