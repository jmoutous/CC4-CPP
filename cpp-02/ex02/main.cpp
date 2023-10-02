/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 22:10:54 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/02 13:35:47 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void) {
	Fixed		a(2.005f);
	Fixed const	b( 2 );

	std::cout << (a + b) << std::endl;
	std::cout << (a - b) << std::endl;
	std::cout << (a * b) << std::endl;
	std::cout << (a / b) << std::endl;

	return 0;
}
