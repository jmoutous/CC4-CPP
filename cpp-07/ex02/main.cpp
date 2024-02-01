/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 18:27:38 by jmoutous          #+#    #+#             */
/*   Updated: 2024/02/01 14:34:53 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main( void )
{
	// {
	// 	std::cout << "====== Array<int> ======" << std::endl;
	// 	unsigned int	n = 10;
	// 	Array<int>		a(n);

		// a.displayArray("a");
	// }

	// {
	// 	std::cout << "\n====== Array<char> ======" << std::endl;
	// 	unsigned int	n = 10;
	// 	Array<char>		a(n);
	// 	char			c = 'a';

	// 	a.displayArray("a");

	// 	std::cout << "\nAssigning value to the array\n" << std::endl;
	// 	for (unsigned int i = 0; i < n; ++i)
	// 	{
	// 		a[i] = c;
	// 		c++;
	// 	}

	// 	a.displayArray("a");
	// }

	// {
	// 	std::cout << "====== Array<int> out of bonds ======" << std::endl;
	// 	unsigned int	n = 5;
	// 	Array<int>		a(n);

	// 	a.displayArray("a");

	// 	std::cout << "\nModifying one value:" << std::endl;
	// 	a[2] = 666;

	// 	a.displayArray("a");

	// 	std::cout << "\na[2]: " << a[2] << std::endl;

	// 	try
	// 	{
	// 		std::cout << "\na[666]: " << a[666] << std::endl;
	// 	}
	// 	catch (std::exception & e)
	// 	{
	// 		std::cout << e.what() << std::endl;
	// 	}
	// }

	// {
	// 	std::cout << "====== Array<int> copy ======" << std::endl;
	// 	unsigned int	n = 5;
	// 	Array<int>		a(n);
	// 	Array<int>		b(n);
	// 	Array<int>		c;

	// 	b = a;

	// 	a.displayArray("a");
	// 	b.displayArray("b");
	// 	c.displayArray("c");

	// 	std::cout << "\nModifying one value of a:" << std::endl;
	// 	a[2] = 666;
	
	// 	a.displayArray("a");
	// 	b.displayArray("b");
	// 	c.displayArray("c");
	// }

	{
		std::cout << "====== Array<int> copy ======" << std::endl;
		unsigned int	n = 5;
		Array<int>		a(n);
		Array<int>		b(a);

		a.displayArray("a");
		b.displayArray("b");

		std::cout << "\nModifying one value of a:" << std::endl;
		a[2] = 666;
	
		a.displayArray("a");
		b.displayArray("b");
	}

	return (0);
}