/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:38:17 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/10 11:11:07 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
	std::cout << "Dog's default constructor called" << std::endl;

	this->_type = "Dog";
};

Dog::Dog( Dog const & source ) {
	std::cout << "Dog's copy constructor called" << std::endl;

	*this = source;
};

Dog::~Dog() {
	std::cout << "Dog's destructor called" << std::endl;
};

Dog & Dog::operator=( Dog const & rhs ) {
	Animal::operator=(rhs);
	
	return (*this);
};

void	Dog::makeSound( void ) const {
	std::cout << "Wouf!" << std::endl;
};
