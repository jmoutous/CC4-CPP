/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 17:18:19 by jmoutous          #+#    #+#             */
/*   Updated: 2024/02/11 16:59:09 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstdlib>
#include <ctime>
#include <set>

int	main( void )
{
	try
	{
		srand(time(NULL));

		{
			std::cout << "\n====== Span's copy constructor's test ======" << std::endl;

			Span	a(5);
			Span	b(a);
			Span	c(0);

			a.display("a");
			b.display("b");
			c.display("c");

			std::cout << "\tAdd numbers in a, and then copy a in b (c = a)" << std::endl;

			a.addNumber(666);
			a.addNumber(42);
			c = a;

			a.display("a");
			b.display("b");
			c.display("c");
		}

		{
			std::cout << "\n====== Span's operator= test ======" << std::endl;

			Span	a(1);
			Span	b(5);

			std::cout << "\tAdd numbers in a and b" << std::endl;
			
			a.addNumber(666);
			b.addNumber(1);
			b.addNumber(2);
			b.addNumber(3);
			b.addNumber(4);
			b.addNumber(5);

			a.display("a");
			b.display("b");

			std::cout << "\tCopy a in b (b = a)" << std::endl;
			b = a;

			a.display("a");
			b.display("b");
		}

		{
			std::cout << "\n====== Span's throw test ======" << std::endl;

			Span	a(1);

			a.display("a");

			try
			{
				std::cout << "\tTry to add 2 numbers in a" << std::endl;
				a.addNumber(666);
				a.addNumber(42);
			}
			catch (std::exception & e)
			{
				std::cout << e.what() << std::endl;
			}

			a.display("a");

		}

		std::cout << "\n====== Span's longestSpan() and shortestSpan() test ======" << std::endl;
		{
			std::cout << "\tEmpty span (a(0))" << std::endl;
			Span	a(0);
			
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
		}

		{
			std::cout << "\n\tSpan with only one element (a(1))" << std::endl;
			Span	a(1);

			a.addNumber(666);
			
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
		}

		{
			std::cout << "\n\tSpan with 10 randoms elements from 0 to 1000 (a(10))" << std::endl;
			Span a(10);

			for (int i = 0; i < 10; ++i)
			{
				int randNb = rand() % 1000;
				a.addNumber(randNb);
			}

			a.display("a");

			try
			{
				std::cout << "The longest span for a is " << a.longestSpan() << std::endl;
				std::cout << "The shortest span for a is " << a.shortestSpan() << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cout << e.what() << std::endl;
			}

		}

		{
			std::cout << "\n\tSpan with 10003 randoms elements with 1 INT_MIN and 2 INT_MAX" << std::endl;
			Span a(10003);

			for (int i = 0; i < 10000; ++i)
			{
				int randNb = rand();
				a.addNumber(randNb);
			}
			a.addNumber(INT_MIN);
			a.addNumber(INT_MAX);
			a.addNumber(INT_MAX);

			try
			{
				std::cout << "The longest span for a is " << a.longestSpan() << std::endl;
				std::cout << "The shortest span for a is " << a.shortestSpan() << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cout << e.what() << std::endl;
			}
		}

		{
			std::cout << "\n\tSpan with 10000 randoms elements" << std::endl;
			Span a(10000);

			for (int i = 0; i < 10000; ++i)
			{
				int randNb = rand();
				a.addNumber(randNb);
			}

			try
			{
				std::cout << "The longest span for a is " << a.longestSpan() << std::endl;
				std::cout << "The shortest span for a is " << a.shortestSpan() << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cout << e.what() << std::endl;
			}
		}

		std::cout << "\n====== Span's addNumber() using a range of iterators test ======" << std::endl;
		{
			std::cout << "\tFrom a vector<int>" << std::endl;
			std::vector<int>	a(10);
			Span				b(5);

			std::cout << "Content of the vector<int> a" << std::endl;
			for (size_t i = 0; i < a.size(); ++i)
			{
				int randNb = rand() % 1000;
				a[i] = randNb;
				std::cout << "a[" << i << "]= " << a[i] << std::endl;
			}

			try
			{
				b.addNumber(a.begin(), a.begin() + 3);
			}
			catch (std::exception & e)
			{
				std::cout << e.what() << std::endl;
			}

			b.display("b");
		}

		{
			std::cout << "\n\tFrom a set<int>" << std::endl;
			std::set<int>	a;
			Span			b(10);

			std::cout << "Content of the set<int> a" << std::endl;
			for (int i = 0; i < 10; ++i)
			{
				int randNb = rand() % 1000;
				a.insert(randNb);
			}

			for (std::set<int>::iterator it = a.begin(); it != a.end(); ++it)
			{
				std::cout << *it << std::endl;
			}

			try
			{
				b.addNumber(a.begin(), a.end());
			}
			catch (std::exception & e)
			{
				std::cout << e.what() << std::endl;
			}

			b.display("b");
		}
		
		{
			std::cout << "\n====== Subject's test ======" << std::endl;
			Span sp = Span(5);

			std::cout << "Adding 5 numbers to the Span sp" << std::endl;
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);

			std::cout << "\nsp.shortestSpan()= ";
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << "sp.longestSpan()= ";
			std::cout << sp.longestSpan() << std::endl;
		}

	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}