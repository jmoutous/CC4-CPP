/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:25:08 by jmoutous          #+#    #+#             */
/*   Updated: 2023/12/09 16:09:51 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include "Base.hpp"

Base	*generate( void )
{
	srand (time(NULL));

	int		random = rand() % 3;
	Base	*randBase = NULL;

	switch (random)
	{
		case 0:
			randBase = new A;
			break;
		case 1:
			randBase = new B;
			break;
		case 2:
			randBase = new C;
			break;
	}
	return (randBase);
}

void	identify( Base* p )
{
	std::cout << "void identify( Base* p ): ";

	if (dynamic_cast<A*>(p))
		std::cout << "Class A!" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Class B!" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Class C!" << std::endl;
	else
		std::cout << "Unknown class!" << std::endl;
}

void	identify( Base& p )
{
	std::cout << "void identify( Base& p ): ";

	try
	{
		(void) dynamic_cast<A&>(p);
		std::cout << "Class A!" << std::endl;
		return ;
	}
	catch (std::exception & e) {}

	try
	{
		(void) dynamic_cast<B&>(p);
		std::cout << "Class B!" << std::endl;
		return ;
	}
	catch(std::exception& e)	{}

	try
	{
		(void) dynamic_cast<C&>(p);
		std::cout << "Class C!" << std::endl;
		return ;
	}
	catch(std::exception& e)	{}

	std::cout << "Unknown class!" << std::endl;
}

int	main( void )
{
	Base	*randBase = generate();

	identify(randBase);
	identify(*randBase);

	std::cout << "\n===== Test bad class ======" << std::endl;
	Base	d;
	Base	*ptr_d = &d;

	identify(ptr_d);
	identify(d);

	delete randBase;

	return (0);
}
