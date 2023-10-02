/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 22:10:54 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/02 19:22:32 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int	main(void) {
	{
		Point const	a(2,1);
		Point const	b(4,2);
		Point const	c(0,6);
		Point const	point(1,3.4f);

		if(bsp(a, b, c, point))
			std::cout << "Le point se trouve dans le triangle" << std::endl;
		else
			std::cout << "Le point ne se trouve pas dans le triangle" << std::endl;
	}

	// {
	// 	Point const	a(2,1);
	// 	Point const	copy(a);

	// 	std::cout << "x = " << copy.getX() << "\ny = " << copy.getY() << std::endl;
	// }

	// {
	// 	Point const	a(4,2);
	// 	Point const	copy = a;

	// 	std::cout << "x = " << copy.getX() << "\ny = " << copy.getY() << std::endl;
	// }
	
	return (0);
}
