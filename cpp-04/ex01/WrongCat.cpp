/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:38:17 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/10 14:34:27 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	std::cout << "WrongCat's default constructor called" << std::endl;

	this->_type = "WrongCat";
};

WrongCat::WrongCat( WrongCat const & source ) {
	std::cout << "WrongCat's copy constructor called" << std::endl;

	*this = source;
};

WrongCat::~WrongCat() {
	std::cout << "WrongCat's destructor called" << std::endl;
};

WrongCat & WrongCat::operator=( WrongCat const & rhs ) {
	WrongAnimal::operator=(rhs);
	
	return (*this);
};

void	WrongCat::makeSound( void ) const {
	std::cout << "Miaouw!" << std::endl;
};
