/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 22:10:54 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/02 15:03:50 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void) {
	// {
	// 	Fixed a(4.2f);
		
	// 	std::cout << "a = " << a << std::endl;
	// 	std::cout << "a = " << ++a << std::endl;
	// 	std::cout << "a = " << a << std::endl;
	// 	std::cout << "a = " << a++ << std::endl;
	// 	std::cout << "a = " << a << std::endl;
	// }
	// {
	// 	Fixed a(4.2f);
		
	// 	std::cout << "a = " << a << std::endl;
	// 	std::cout << "a = " << --a << std::endl;
	// 	std::cout << "a = " << a << std::endl;
	// 	std::cout << "a = " << a-- << std::endl;
	// 	std::cout << "a = " << a << std::endl;
	// }
	{
		Fixed	a(4.2f);
		Fixed 	b(2.1f);

		std::cout << "a = " << a << std::endl;
		std::cout << "b = " << b << std::endl;
		std::cout << "min(a, b) = " << Fixed::min(a, b) << std::endl;
		std::cout << "max(a, b) = " << Fixed::max(a, b) << std::endl;
	}
	// {
	// 	Fixed		a;
	// 	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ));
	// }

	return (0);
}
