/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:35:47 by jmoutous          #+#    #+#             */
/*   Updated: 2024/03/27 18:36:33 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

static bool	checkArg( char *arg )
{
	int	i = 0;

	if (arg[i] == '+' || arg[i] == '-')
		i++;
	
	for (; arg[i]; ++i)
	{
		if (std::isdigit(arg[i]) == false)
		{
			std::cout << "Error: " << arg << " is not a valid digit" << std::endl;
			return (false);
		}
	}
	
	return (true);
}

static bool	isUnique( char **av, int index )
{
	for (int i = index + 1; av[i]; ++i)
	{
		if ( strcmp(av[index], av[i]) == 0 )
		{
			std::cout << "Error: " << av[index] << " is not unique" << std::endl;
			return (false);
		}
	}

	return (true);
}

bool		checkArgs( char **av )
{
	int	i = 1;

	for (; av[i + 1]; ++i)
	{
		if (checkArg(av[i]) == false || isUnique(av, i) == false)
			return (false);
	}

	if (av[i] && !av[i + 1] && checkArg(av[i]) == false)
		return (false);
	
	return (true);
}

int	jacobsthal( int i )
{
	if (i == 0)
		return (0);
	else if (i == 1)
		return (1);
	else
		return (jacobsthal(i - 1) + 2 * jacobsthal(i - 2));
}

static std::vector< int >	buildJacobsthalVector( int nbArg )
{
	std::vector< int >	sequence;

	for (int i = 2; i < nbArg + 2; ++i)
		sequence.push_back(jacobsthal(i));

	return (sequence);
}

void				pMergeVector( char **av, int nbArg )
{
	std::vector< int >	jacobsthalSequence = buildJacobsthalVector(nbArg);

printVector( jacobsthalSequence );

(void) av;
}