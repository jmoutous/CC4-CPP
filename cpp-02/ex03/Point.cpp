/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:26:59 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/02 17:04:29 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {
};

Point::Point( float const x, float const y) : _x(x), _y(y) {
};

// Point::Point( Point const & source ) {
// 	*this = source;
// };

Point::~Point() {
};

// Point & Point::operator=( Point const & rhs ) {
// 	this->_x(rhs.getX());
// 	this->_y(rhs.getY());

// 	return (*this);
// };

Fixed	Point::getX( void ) const {
	return (this->_x);
}

Fixed	Point::getY( void ) const {
	return (this->_y);
}
