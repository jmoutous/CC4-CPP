/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:25:32 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/03 13:51:52 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int	orientation(Point const point, Point const a, Point const b) {
	float	cross_product;

	cross_product = ((point.getX() - a.getX()) * (point.getY() - b.getY()))
					- ((point.getY() - a.getY()) * (point.getX() - b.getX()));

	if( cross_product >= 0)
		return (1);
	else
		return (0);
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	int	o1, o2, o3;

	o1 = orientation(point, a, b);
	o2 = orientation(point, b, c);
	o3 = orientation(point, c, a);

	if (o1 == o2 && o2 == o3)
		return true;
	else
		return false;
}