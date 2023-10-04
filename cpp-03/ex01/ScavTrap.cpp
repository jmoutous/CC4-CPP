/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:11:04 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/04 14:24:34 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "ScavTrap's default constructor called" << std::endl;
};

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name) {
	std::cout << "ScavTrap's constructor called for  " << name << std::endl;
};

ScavTrap::ScavTrap( ScavTrap const & source ) : ClapTrap( source ) {
	std::cout << "ScavTrap's copy constructor called" << std::endl;
};

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap's destructor called" << std::endl;
};

ScavTrap & ScavTrap::operator=( ScavTrap const & rhs ) {
	if(&rhs == this)
		return (*this);
	
	std::cout << "ScavTrap's operator= called" << std::endl;
	this->ClapTrap::operator=(rhs);

	return (*this);
};

void	ScavTrap::guardGate( void ) {
	std::cout << "ScavTrap is now in Gate kepper mode!" << std::endl;
}