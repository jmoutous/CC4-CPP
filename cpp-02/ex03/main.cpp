/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 22:10:54 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/02 17:02:38 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int	main(void) {
	Point const	a(1,1);
	Point const	b(6,1);
	Point const	c(1,6);
	Point const	point(2,2);

	if(bsp(a, b, c, point))
		std::cout << "Le point se trouve dans le triangle" << std::endl;
	else
		std::cout << "Le point ne se trouve pas dans le triangle" << std::endl;
	return (0);
}
