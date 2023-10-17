/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:20:27 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/17 14:48:37 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	std::cout << "Ice's default constructor called" << std::endl;
};

Ice::Ice( Ice const & source ) {
	std::cout << "Ice's copy constructor called" << std::endl;

		*this = source;
};

Ice::~Ice() {
	std::cout << "Ice's destructor called" << std::endl;
};

Ice & Ice::operator=( Ice const & rhs ) {
	if (this != &rhs)
		this->_type = rhs._type;
		
	return (*this);
};

AMateria*	Ice::clone() const {
	AMateria	*copy = new Ice(*this);

	return (copy);
};

void		Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
};
