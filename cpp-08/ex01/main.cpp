/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 17:18:19 by jmoutous          #+#    #+#             */
/*   Updated: 2024/02/03 18:53:23 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstdlib>
#include <ctime>

int	main( void )
{
	// {
	// 	Span	a(5);
	// 	Span	b(a);
	// 	Span	c(0);

	// 	a.display("a");
	// 	b.display("b");
	// 	c.display("c");

	// 	std::cout << "Add numbers in a, and copy a in c" << std::endl;

	// 	a.addNumber(666);
	// 	a.addNumber(42);
	// 	c = a;

	// 	a.display("a");
	// 	b.display("b");
	// 	c.display("c");
	// }

	// {
	// 	Span	a(1);
	// 	Span	b(5);

	// 	a.addNumber(666);
	// 	b.addNumber(1);
	// 	b.addNumber(2);
	// 	b.addNumber(3);
	// 	b.addNumber(4);
	// 	b.addNumber(5);

	// 	a.display("a");
	// 	b.display("b");

	// 	std::cout << "Copy a in b" << std::endl;
	// 	b = a;

	// 	a.display("a");
	// 	b.display("b");
	// }

	// {
	// 	Span	a(1);

	// 	a.display("a");

	// 	try
	// 	{
	// 		std::cout << "Try to add numbers in a" << std::endl;
	// 		a.addNumber(666);
	// 		a.addNumber(42);
	// 	}
	// 	catch (std::exception & e)
	// 	{
	// 		std::cout << e.what() << std::endl;
	// 	}

	// 	a.display("a");

	// }

	// {
	// 	Span	a(0);
	// 	Span	b(1);

	// 	b.addNumber(666);
		
	// 	try
	// 	{
	// 		a.longestSpan();
	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cout << e.what() << std::endl;
	// 	}

	// 	try
	// 	{
	// 		a.shortestSpan();
	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cout << e.what() << std::endl;
	// 	}

	// 	try
	// 	{
	// 		b.longestSpan();
	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cout << e.what() << std::endl;
	// 	}

	// 	try
	// 	{
	// 		b.shortestSpan();
	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cout << e.what() << std::endl;
	// 	}
	// }

	srand(time(NULL));

	// {
	// 	Span a(10);

	// 	for (int i = 0; i < 10; ++i)
	// 	{
	// 		int randNb = rand() % 1000;
	// 		a.addNumber(randNb);
	// 	}

	// 	a.display("a");

	// 	std::cout << "The longest span for a is " << a.longestSpan() << std::endl;
	// 	std::cout << "The shortest span for a is " << a.shortestSpan() << std::endl;

	// }

	{
		Span a(100000);

		for (int i = 0; i < 100000; ++i)
		{
			int randNb = rand();
			a.addNumber(randNb);
		}

		std::cout << "The longest span for a is " << a.longestSpan() << std::endl;
		std::cout << "The shortest span for a is " << a.shortestSpan() << std::endl;

	}


	return (0);
}