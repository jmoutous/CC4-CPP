/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 22:10:45 by jmoutous          #+#    #+#             */
/*   Updated: 2023/09/23 18:05:54 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixed_point(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( int const i ) {
	std::cout << "Constructor called for the integer " << i << std::endl;
	_fixed_point = i << 8;
}

Fixed::Fixed( float const f ) {
	
}

Fixed::Fixed( Fixed const & source) {
	std::cout << "Copy constructor called" << std::endl;
	*this = source;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed &	Fixed::operator=( Fixed const & rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixed_point = rhs.getRawBits();

	return *this;
}

int	Fixed::getRawBits( void ) const {
	return this->_fixed_point;
}

void	Fixed::setRawBits( int const raw) {
	std::cout << "setRawBits called" << std::endl;
	_fixed_point = raw;
}

std::ostream &	operator<<( std::ostream & o, Fixed const & fixed) {
	o << (fixed.getRawBits() >> 8);

	return o;
}
