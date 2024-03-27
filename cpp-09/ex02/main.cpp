/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:35:43 by jmoutous          #+#    #+#             */
/*   Updated: 2024/03/27 14:08:55 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int ac, char **av)
{
	int					n = ac - 1;
	std::vector< int >	jacobsthalSequence = buildJacobsthal(n);
	(void) av;
	
	printVector( jacobsthalSequence );

	return (0);
}