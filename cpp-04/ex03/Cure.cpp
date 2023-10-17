/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:40:06 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/17 17:43:43 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	std::cout << "Cure's default constructor called" << std::endl;
};

Cure::Cure( Cure const & source ) {
	std::cout << "Cure's copy constructor called" << std::endl;

		*this = source;
};

Cure::~Cure() {
	std::cout << "Cure's destructor called" << std::endl;
};

Cure & Cure::operator=( Cure const & rhs ) {
	if (this != &rhs)
		this->_type = rhs._type;

	return (*this);
};

AMateria*	Cure::clone() const {
	AMateria	*copy = new Cure(*this);

	return (copy);
};

void		Cure::use(ICharacter& target) {
	std::cout << "* heals" << target.getName() << "'s wounds *" << std::endl;
};

