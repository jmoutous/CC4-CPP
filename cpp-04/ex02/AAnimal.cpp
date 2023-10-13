/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:38:17 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/10 11:26:01 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("AAnimal") {
	std::cout << "AAnimal's default constructor called" << std::endl;
};

AAnimal::AAnimal( AAnimal const & source ) {
	std::cout << "AAnimal's copy constructor called" << std::endl;

	*this = source;
};

AAnimal::~AAnimal() {
	std::cout << "AAnimal's destructor called" << std::endl;
};

AAnimal & AAnimal::operator=( AAnimal const & rhs ) {
	if (this != &rhs)
		this->_type = rhs._type;

	return (*this);
};

void		AAnimal::setType( std::string type) {
	this->_type = type;
};

std::string	AAnimal::getType( void ) const{
	return (this->_type);
};

void	AAnimal::makeSound( void ) const {
	std::cout << "An animal make a sound" << std::endl;
};
