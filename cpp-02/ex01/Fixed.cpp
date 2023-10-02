/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 22:10:45 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/02 16:18:36 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_fractionalBits = 8;

Fixed::Fixed() : _rawBits(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( int const i ) {
	std::cout << "Int constructor called for " << i << std::endl;
	this->_rawBits = i << _fractionalBits;
}

Fixed::Fixed( float const f ) {
	std::cout << "Float constructor called " << f << std::endl;
	this->_rawBits = roundf(f * (1 << _fractionalBits));
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
	this->_rawBits = rhs.getRawBits();

	return *this;
}

int	Fixed::getRawBits( void ) const {
	return this->_rawBits;
}

void	Fixed::setRawBits( int const raw) {
	std::cout << "setRawBits called" << std::endl;
	this->_rawBits = raw;
}

float	Fixed::toFloat( void ) const {
	return 	(static_cast<float>(this->_rawBits) / (1 << _fractionalBits));
}

int		Fixed::toInt( void ) const {
	return (this->_rawBits >> _fractionalBits);
}

std::ostream &	operator<<( std::ostream & o, const Fixed & fixed) {
	o << fixed.toFloat();

	return o;
}
