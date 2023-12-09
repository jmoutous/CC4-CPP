/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 10:54:46 by jmoutous          #+#    #+#             */
/*   Updated: 2023/12/09 16:39:21 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"

template< typename T >
void	swap(T & a, T & b)
{
	T	temp = a;

	a = b;
	b = temp;
}

template< typename T >
T const &	min(T const & x, T const & y)
{
	return ( x >= y ? y : x);
}

template< typename T >
T const &	max(T const & x, T const & y)
{
	return ( x <= y ? y : x);
}

int	main( void )
{
	{
		std::cout << "===== Subject's test =====\n" << std::endl;

		int a = 2;
		int b = 3;

		std::cout << "Before swap\t";
		std::cout << "a = " << a << ", b = " << b << std::endl;
		::swap(a, b);
		std::cout << "After swap \t";
		std::cout << "a = " << a << ", b = " << b << std::endl;
		
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		
		std::cout << std::endl;

		std::string c = "chaine1";
		std::string d = "chaine2";

		std::cout << "Before swap\t";
		std::cout << "c = " << c << ", d = " << d << std::endl;
		::swap(c, d);
		std::cout << "After swap \t";
		std::cout << "c = " << c << ", d = " << d << std::endl;

		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}

	{
		std::cout << "\n===== Extra tests =====\n" << std::endl;

		float a = 2.9f;
		float b = 3.1f;

		std::cout << "Before swap\t";
		std::cout << "a = " << a << ", b = " << b << std::endl;
		::swap(a, b);
		std::cout << "After swap \t";
		std::cout << "a = " << a << ", b = " << b << std::endl;

		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		
		std::cout << std::endl;

		long double c = 666.42;
		long double d = 4973.21;

		std::cout << "Before swap\t";
		std::cout << "c = " << c << ", d = " << d << std::endl;
		::swap(c, d);
		std::cout << "After swap \t";
		std::cout << "c = " << c << ", d = " << d << std::endl;

		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}

	return 0;
}