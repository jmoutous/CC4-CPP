/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 22:10:45 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/03 14:01:15 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_fractionalBits = 8;

Fixed::Fixed() : _rawBits(0) {
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( int const i ) {
	// std::cout << "Int constructor called for " << i << std::endl;
	this->_rawBits = i << _fractionalBits;
}

Fixed::Fixed( float const f ) {
	// std::cout << "Float constructor called " << f << std::endl;
	this->_rawBits = roundf(f * (1 << _fractionalBits));
}

Fixed::Fixed( const Fixed & source) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = source;
}

Fixed::~Fixed() {
	// std::cout << "Destructor called" << std::endl;
}

Fixed &	Fixed::operator=( const Fixed & rhs) {
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_rawBits = rhs.getRawBits();

	return (*this);
}

bool	Fixed::operator>( const Fixed & rhs) const {
	if(this->_rawBits > rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator<( const Fixed & rhs) const {
	if (this->_rawBits < rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator>=( const Fixed & rhs) const {
	if(this->_rawBits >= rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator<=( const Fixed & rhs) const {
	if(this->_rawBits <= rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator==( const Fixed & rhs) const {
	if(this->_rawBits == rhs.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator!=( const Fixed & rhs) const {
	if(this->_rawBits != rhs.getRawBits())
		return true;
	return false;
}

Fixed	Fixed::operator+( const Fixed & rhs) {
	Fixed	res(this->toFloat() + rhs.toFloat());
	
	return (res);
}

Fixed	Fixed::operator-( const Fixed & rhs) {
	Fixed	res(this->toFloat() - rhs.toFloat());
	
	return (res);
}

Fixed	Fixed::operator*( const Fixed & rhs) {
	Fixed	res(this->toFloat() * rhs.toFloat());
	
	return (res);
}

Fixed	Fixed::operator/( const Fixed & rhs) {
	Fixed	res(this->toFloat() / rhs.toFloat());
	
	return (res);
}

Fixed &	Fixed::operator++( void ) {
	this->setRawBits(this->_rawBits + 1);
	
	return (*this);
}

Fixed	Fixed::operator++( int ) {
	Fixed result(*this);

	++(*this);
	return (result);
}

Fixed &	Fixed::operator--( void ) {
	this->setRawBits(this->_rawBits - 1);
	
	return (*this);
}

Fixed	Fixed::operator--( int ) {
	Fixed result(*this);

	--(*this);
	return (result);
}

int	Fixed::getRawBits( void ) const {
	return this->_rawBits;
}

void	Fixed::setRawBits( int const raw) {
	// std::cout << "setRawBits called" << std::endl;
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

	return (o);
}

Fixed &	Fixed::min( Fixed & a, Fixed & b ) {
	if(a.getRawBits() < b.getRawBits()) {
		return (a);
	}
	else
		return (b);
}

Fixed &	Fixed::max( Fixed & a, Fixed & b ) {
	if(a.getRawBits() > b.getRawBits()) {
		return (a);
	}
	else
		return (b);
}

const Fixed &	Fixed::min( const Fixed & a, const Fixed & b ) {
	if(a.getRawBits() < b.getRawBits()) {
		return (a);
	}
	else
		return (b);
}

const Fixed &	Fixed::max( const Fixed & a, const Fixed & b ) {
	if(a.getRawBits() > b.getRawBits()) {
		return (a);
	}
	else
		return (b);
}

