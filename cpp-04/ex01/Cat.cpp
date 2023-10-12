/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:38:17 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/10 11:38:48 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {
	std::cout << "Cat's default constructor called" << std::endl;

	this->_type = "Cat";
};

Cat::Cat( Cat const & source ) {
	std::cout << "Cat's copy constructor called" << std::endl;

	*this = source;
};

Cat::~Cat() {
	std::cout << "Cat's destructor called" << std::endl;
};

Cat & Cat::operator=( Cat const & rhs ) {
	Animal::operator=(rhs);
	
	return (*this);
};

void	Cat::makeSound( void ) const {
	std::cout << "Miaouw!" << std::endl;
};
