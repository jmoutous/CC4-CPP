/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 17:18:19 by jmoutous          #+#    #+#             */
/*   Updated: 2024/02/10 17:40:45 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstdlib>
#include <ctime>

int	main( void )
{
	try
	{
		srand(time(NULL));

		{
			Span	a(5);
			Span	b(a);
			Span	c(0);

			a.display("a");
			b.display("b");
			c.display("c");

			std::cout << "Add numbers in a, and copy a in c" << std::endl;

			a.addNumber(666);
			a.addNumber(42);
			c = a;

			a.display("a");
			b.display("b");
			c.display("c");
		}

		{
			Span	a(1);
			Span	b(5);

			a.addNumber(666);
			b.addNumber(1);
			b.addNumber(2);
			b.addNumber(3);
			b.addNumber(4);
			b.addNumber(5);

			a.display("a");
			b.display("b");

			std::cout << "Copy a in b" << std::endl;
			b = a;

			a.display("a");
			b.display("b");
		}

		{
			Span	a(1);

			a.display("a");

			try
			{
				std::cout << "Try to add numbers in a" << std::endl;
				a.addNumber(666);
				a.addNumber(42);
			}
			catch (std::exception & e)
			{
				std::cout << e.what() << std::endl;
			}

			a.display("a");

		}

		{
			Span	a(0);
			Span	b(1);

			b.addNumber(666);
			
			try
			{
				a.longestSpan();
			}
			catch(const std::exception& e)
			{
				std::cout << e.what() << std::endl;
			}

			try
			{
				a.shortestSpan();
			}
			catch(const std::exception& e)
			{
				std::cout << e.what() << std::endl;
			}

			try
			{
				b.longestSpan();
			}
			catch(const std::exception& e)
			{
				std::cout << e.what() << std::endl;
			}

			try
			{
				b.shortestSpan();
			}
			catch(const std::exception& e)
			{
				std::cout << e.what() << std::endl;
			}
		}

		{
			Span a(10);

			for (int i = 0; i < 10; ++i)
			{
				int randNb = rand() % 1000;
				a.addNumber(randNb);
			}

			a.display("a");

			std::cout << "The longest span for a is " << a.longestSpan() << std::endl;
			std::cout << "The shortest span for a is " << a.shortestSpan() << std::endl;

		}

		{
			Span a(10003);

			for (int i = 0; i < 10000; ++i)
			{
				int randNb = rand();
				a.addNumber(randNb);
			}
			a.addNumber(INT_MIN);
			a.addNumber(INT_MAX);
			a.addNumber(INT_MAX);
			std::cout << "The longest span for a is " << a.longestSpan() << std::endl;
			std::cout << "The shortest span for a is " << a.shortestSpan() << std::endl;

		}

		{
			Span a(10000);

			for (int i = 0; i < 10000; ++i)
			{
				int randNb = rand();
				a.addNumber(randNb);
			}

			std::cout << "The longest span for a is " << a.longestSpan() << std::endl;
			std::cout << "The shortest span for a is " << a.shortestSpan() << std::endl;

		}

		{
			std::cout << "====== Subject's test ======" << std::endl;
			Span sp = Span(5);

			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);

			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}

		{
			Span	a(10);

			try
			{
				a.addNumber(666, 6666);
			}
			catch (std::exception & e)
			{
				std::cout << e.what() << std::endl;
			}

			a.display("a");
		}
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}