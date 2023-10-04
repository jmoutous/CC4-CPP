/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:09:54 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/04 15:14:43 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "FragTrap's default constructor called" << std::endl;
};

FragTrap::FragTrap( std::string name ) : ClapTrap(name) {
	std::cout << "FragTrap's constructor called for  " << name << std::endl;
};

FragTrap::FragTrap( FragTrap const & source ) : ClapTrap( source ) {
	std::cout << "FragTrap's copy constructor called on " << source.getName() << std::endl;
};

FragTrap::~FragTrap() {
	std::cout << "FragTrap's destructor called for " << this->getName() << std::endl;
};

FragTrap & FragTrap::operator=( FragTrap const & rhs ) {
	if(&rhs == this)
		return (*this);
	
	std::cout << "FragTrap's operator= called on " << rhs.getName() << std::endl;
	this->ClapTrap::operator=(rhs);

	return (*this);
};
