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

	pMergeVector( av, ac - 1 );

	return (0);
}
