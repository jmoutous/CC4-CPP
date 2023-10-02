/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:26:59 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/02 18:54:21 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {
};

Point::Point( float const x, float const y) : _x(x), _y(y) {
};

Point::Point( Point const & source ) : _x(source._x), _y(source._y) {
};

Point::~Point() {
};

Point & Point::operator=( Point const & ) {
	return (*this);
};

float	Point::getX( void ) const {
	return (this->_x.toFloat());
}

float	Point::getY( void ) const {
	return (this->_y.toFloat());
}
