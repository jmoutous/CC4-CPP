/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:38:17 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/10 14:34:23 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal") {
	std::cout << "WrongAnimal's default constructor called" << std::endl;
};

WrongAnimal::WrongAnimal( WrongAnimal const & source ) {
	std::cout << "WrongAnimal's copy constructor called" << std::endl;

	*this = source;
};

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal's destructor called" << std::endl;
};

WrongAnimal & WrongAnimal::operator=( WrongAnimal const & rhs ) {
	if (this != &rhs)
		this->_type = rhs._type;

	return (*this);
};

void		WrongAnimal::setType( std::string type) {
	this->_type = type;
};

std::string	WrongAnimal::getType( void ) const{
	return (this->_type);
};

void	WrongAnimal::makeSound( void ) const {
	std::cout << "An WrongAnimal make a sound" << std::endl;
};
