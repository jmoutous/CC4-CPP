/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 22:10:45 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/03 14:01:23 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_fractionalBits = 8;

Fixed::Fixed() : _rawBits(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed & source) {
	std::cout << "Copy constructor called" << std::endl;
	*this = source;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed &	Fixed::operator=( const Fixed & rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_rawBits = rhs.getRawBits();

	return *this;
}

int	Fixed::getRawBits( void ) const {
	std::cout << "getRawBits called" << std::endl;

	return this->_rawBits;
}

void	Fixed::setRawBits( int const raw) {
	std::cout << "setRawBits called" << std::endl;
	this->_rawBits = raw;
}
