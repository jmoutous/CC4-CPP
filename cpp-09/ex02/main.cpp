/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:35:43 by jmoutous          #+#    #+#             */
/*   Updated: 2024/03/28 15:28:20 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int ac, char **av)
{
	if (ac < 3)
	{
		std::cout << "Error: you have to input at least 2 arguments\nUsage: ./PmergeMe [arg1] [arg2] ... [argn]\n";
		return (1);
	}

	if(checkArgs(av) == false)
		return (2);

	std::cout << "[ARGS]  Before: ";
	for (int i = 1; av[i]; ++i)
		std::cout << av[i] << " ";
	std::cout << std::endl;

	// double	timeVector = pMergeVector( av, ac - 1 );
	double	timeDeque = pMergeDeque( av, ac - 1 );

	// std::cout << "Time to process a range of " << ac - 1 << " elements with std::vector: " << timeVector << " us" << std::endl;
	std::cout << "Time to process a range of " << ac - 1 << " elements with std::deque:  " << timeDeque << " us" << std::endl;
	// std::cout << "[FASTEST]: " << (timeVector > timeDeque ? "std::deque" : "std::vector") << std::endl;
	// std::cout << "(Time difference between std::vector and std::deque: " << std::abs( timeVector - timeDeque ) << " us)" << std::endl;

	return (0);
}

// fonctionne avec 5 args mais pas plus