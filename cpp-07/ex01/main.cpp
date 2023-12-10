/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 11:19:28 by jmoutous          #+#    #+#             */
/*   Updated: 2023/12/10 16:25:29 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Iter.hpp"

void	reverseCase(char & c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	else if (c >= 'A' && c <= 'Z')
		c += 32;
}

int	main( void )
{
	{
		std::cout << "\n===== ReverseCase's test =====" << std::endl;

		char	str[] = "Hello World!";

		std::cout << str << std::endl;

		iter(str, 13, reverseCase);

		std::cout << str << std::endl;
	}

	{
		std::cout << "\n===== Increment's test with int =====" << std::endl;
		int		arrInt[] = {2, 45, 7, 60, 22, 55, 20, 94, 31, 16};

		iter(arrInt, 10, printP);
		std::cout << std::endl;

		iter(arrInt, 10, increment);
		
		iter(arrInt, 10, printP);
		std::cout << std::endl;
	}

	{
		std::cout << "\n===== Decrease's test with int =====" << std::endl;
		int		arrInt[] = {2, 45, 7, 60, 22, 55, 20, 94, 31, 16};

		iter(arrInt, 10, printP);
		std::cout << std::endl;

		iter(arrInt, 10, decrease);
		
		iter(arrInt, 10, printP);
		std::cout << std::endl;
	}

	{
		std::cout << "\n===== Increment's test with char =====" << std::endl;
		char	str[] = "Hello world!";

		iter(str, 13, printP);
		std::cout << std::endl;

		iter(str, 13, increment);
		
		iter(str, 13, printP);
		std::cout << std::endl;
	}

	{
		std::cout << "\n===== Decrease's test with char =====" << std::endl;
		char	str[] = "Hello world!";

		iter(str, 13, printP);
		std::cout << std::endl;

		iter(str, 13, decrease);
		
		iter(str, 13, printP);
		std::cout << std::endl;
	}

	return (0);
}