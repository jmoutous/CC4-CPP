/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:16:13 by jmoutous          #+#    #+#             */
/*   Updated: 2024/02/03 17:09:55 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <cstdlib>
#include <ctime>

int main(void)
{
	std::vector<int>	container;
	int					nbs;
	int					counter = 0;

	srand(time(NULL));

	std::cout << "\nEnter the number of vector's number: ";
	do
	{
		std::cin >> nbs;
		if(std::cin.fail() || nbs <= 0)
		{
			std::cin.clear();
			std::cin.ignore();
		}
	} while (nbs == 0);
	std::cout << std::endl;

	for (int i = 0; i < nbs; ++i)
	{
		int randNb = rand() % 1000;
		container.push_back(randNb);
	}

	std::cout << "The container has been filled with " << nbs << " random numbers :" << std::endl;
	for (std::vector<int>::iterator it = container.begin(); it != container.end(); ++it)
	{
		std::cout << *it << "\t";
		counter++;
		if (counter % 10 == 0)
			std::cout << std::endl;
	}

	std::cout << "\n\nWhich number do you want to find? ";
	do
	{
		std::cin >> nbs;
		if(std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
		}
	} while (nbs == 0);
	std::cout << std::endl;

	try
	{
		std::vector<int>::iterator	it = easyFind(container, nbs);

		std::cout << *it << " is present in the container" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return (0);
}