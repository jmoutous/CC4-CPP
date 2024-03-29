/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:35:47 by jmoutous          #+#    #+#             */
/*   Updated: 2024/03/29 16:12:52 by jmoutous         ###   ########lyon.fr   */
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

static bool	isSameNb( char *nb1, char *nb2 )
{
	int	i = 0;
	int	j = 0;

	if (nb1[i] == '+')
		i++;

	if (nb2[j] == '+')
		j++;

	if ( std::strcmp(nb1 + i, nb2 + j) == 0)
		return (true);
	else
		return (false);
}

static bool	isUnique( char **av, int index )
{
	for (int i = index + 1; av[i]; ++i)
	{
		if ( isSameNb(av[index], av[i]) )
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

static int	jacobsthal( int i )
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

static void	fillVector( char **av, std::vector< int > & list )
{
	for (int i = 1; av[i]; ++i)
		list.push_back( std::atoi(av[i]) );
}

void				pMergeVector( char **av, int nbArg )
{
	clock_t	begin, end;

	begin = clock();
	
	std::vector< int >	jacobsthalSequence = buildJacobsthalVector(nbArg);
	std::vector< int >	list;

	fillVector(av, list);

printVector( list );


	end = clock();
	
	std::cout << "Time to process a range of " << " elements with std::vector : ";
	std::cout << static_cast<double>(end - begin) << " us" << std::endl;
}