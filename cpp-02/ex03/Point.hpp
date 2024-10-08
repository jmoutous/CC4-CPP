/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:27:07 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/02 18:53:31 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {
	public:
		Point();
		Point( float const x, float const y);
		Point( Point const & source );
		~Point();

		Point & operator=( Point const & );

		float	getX( void ) const;
		float	getY( void ) const;

	private:
		Fixed const	_x;
		Fixed const	_y;
};

#endif