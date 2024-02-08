/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:29:43 by jmoutous          #+#    #+#             */
/*   Updated: 2024/02/08 18:06:48 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int	main( void )
{
	// {
	// 	std::cout << "====== Test of MutantStack is a Stack ======" << std::endl;
	// 	MutantStack<int>	a;

	// 	std::cout << "\n\t====== Add multiple int in a ======" << std::endl;
	// 	a.push(666);
	// 	a.push(42);
	// 	a.push(21);
	// 	a.push(13);
	// 	a.push(7);

	// 	std::cout << "\t====== a.displayStack(\"a\") ======" << std::endl;
	// 	a.displayStack("a");

	// 	std::cout << "\n\t====== std::cout << a << std::endl ======" << std::endl;
	// 	std::cout << a << std::endl;
	// }

	// {
	// 	std::cout << "====== Test of MutantStack's copy ======" << std::endl;
	// 	MutantStack<int>	a;

	// 	std::cout << "\t====== Add multiple int in a ======" << std::endl;
	// 	a.push(666);
	// 	a.push(42);
	// 	a.push(21);
	// 	a.push(13);
	// 	a.push(7);

	// 	std::cout << "\t====== MutantStack<int>	b(a) ======" << std::endl;
	// 	MutantStack<int>	b(a);
	// 	MutantStack<int>	c;

	// 	a.displayStack("a"); std::cout << std::endl;
	// 	b.displayStack("b"); std::cout << std::endl;
	// 	c.displayStack("c"); std::cout << std::endl;

	// 	std::cout << "\t====== Add a int in a ======" << std::endl;
	// 	a.push(10000);

	// 	std::cout << "\t====== c = a ======" << std::endl;
	// 	c = a;

	// 	a.displayStack("a"); std::cout << std::endl;
	// 	b.displayStack("b"); std::cout << std::endl;
	// 	c.displayStack("c"); std::cout << std::endl;
	// }

	// {
	// 	std::cout << "====== Test of MutantStack's iterator ======" << std::endl;

	// 	MutantStack<int>	a;

	// 	std::cout << "\t====== Add multiple int in a ======" << std::endl;
	// 	a.push(666);
	// 	a.push(42);
	// 	a.push(21);
	// 	a.push(13);
	// 	a.push(7);

	// 	std::cout << "\t====== Display a with it's iterator ======" << std::endl;
	// 	for (MutantStack<int>::iterator it = a.begin(); it != a.end(); ++it)
	// 	{
	// 		std::cout << *it << std::endl;
	// 	}

	// 	std::cout << "\t====== Display a with it's reverse_iterator ======" << std::endl;
	// 	for (MutantStack<int>::reverse_iterator it = a.rbegin(); it != a.rend(); ++it)
	// 	{
	// 		std::cout << *it << std::endl;
	// 	}
	// }

	// {
	// 	std::cout << "====== Test of MutantStack's copy ======" << std::endl;
	// 	MutantStack<int>	a;

	// 	std::cout << "\t====== Add multiple int in a ======" << std::endl;
	// 	a.push(666);
	// 	a.push(42);
	// 	a.push(21);
	// 	a.push(13);
	// 	a.push(7);

	// 	std::cout << "\t====== const MutantStack<int>	b(a) ======" << std::endl;
	// 	const MutantStack<int>	b(a);
	
	// 	std::cout << "\t====== Display a with it's const_iterator ======" << std::endl;
	// 	for (MutantStack<int>::const_iterator it = b.cbegin(); it != b.cend(); ++it)
	// 	{
	// 		std::cout << *it << std::endl;
	// 	}
	
	// 	std::cout << "\t====== Display a with it's const_reverse_iterator ======" << std::endl;
	// 	for (MutantStack<int>::const_reverse_iterator it = b.crbegin(); it != b.crend(); ++it)
	// 	{
	// 		std::cout << *it << std::endl;
	// 	}
	// }

	// {
	// 	std::cout << "====== Test of MutantStack<char> ======" << std::endl;

	// 	MutantStack<char>	a;

	// 	std::cout << "\t====== Add multiple char in a ======" << std::endl;
	// 	a.push('H');
	// 	a.push('e');
	// 	a.push('l');
	// 	a.push('l');
	// 	a.push('o');
	// 	a.push(' ');
	// 	a.push('W');
	// 	a.push('o');
	// 	a.push('r');
	// 	a.push('l');
	// 	a.push('d');
	// 	a.push('!');

	// 	std::cout << "\t====== Display a with it's iterator ======" << std::endl;
	// 	for (MutantStack<char>::iterator it = a.begin(); it != a.end(); ++it)
	// 	{
	// 		std::cout << *it << std::endl;
	// 	}

	// 	std::cout << "\t====== Display a with it's reverse_iterator ======" << std::endl;
	// 	for (MutantStack<char>::reverse_iterator it = a.rbegin(); it != a.rend(); ++it)
	// 	{
	// 		std::cout << *it << std::endl;
	// 	}
	// }

	{
		MutantStack<int>	mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << "mstack.top(): ";
		std::cout << mstack.top() << std::endl;

		mstack.pop();

		std::cout << "mstack.size(): ";
		std::cout << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		// [...]
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;

		std::cout << "Iterator:" << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	
	return (0);
}