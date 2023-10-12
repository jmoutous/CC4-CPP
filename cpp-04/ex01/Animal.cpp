/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:38:17 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/10 11:26:01 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal") {
	std::cout << "Animal's default constructor called" << std::endl;
};

Animal::Animal( Animal const & source ) {
	std::cout << "Animal's copy constructor called" << std::endl;

	*this = source;
};

Animal::~Animal() {
	std::cout << "Animal's destructor called" << std::endl;
};

Animal & Animal::operator=( Animal const & rhs ) {
	if (this != &rhs)
		this->_type = rhs._type;

	return (*this);
};

void		Animal::setType( std::string type) {
	this->_type = type;
};

std::string	Animal::getType( void ) const{
	return (this->_type);
};

void	Animal::makeSound( void ) const {
	std::cout << "An animal make a sound" << std::endl;
};
