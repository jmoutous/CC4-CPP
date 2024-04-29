/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:35:47 by jmoutous          #+#    #+#             */
/*   Updated: 2024/04/12 16:28:24 by jmoutous         ###   ########lyon.fr   */
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
	int					i = 2;
	int					jacobsthalNb = 0;

	while (jacobsthalNb < nbArg)
	{
		jacobsthalNb = jacobsthal(i);
		sequence.push_back(jacobsthal(i));
		i++;
	}

	return (sequence);
}

static void	fillVector( char **av, std::vector< int > & list )
{
	for (int i = 1; av[i]; ++i)
		list.push_back( std::atoi(av[i]) );
}

static std::vector< int >	buildJacobsthalIndexVector( std::vector< int > jacobsthalSequence, int nbArg )
{
	int					lastIndex = -1;
	int					index = 0;
	int					i;
	std::vector< int >	jacobsthalIndex;

	std::vector< int >::const_iterator	it = jacobsthalSequence.begin();

	while (index < nbArg)
	{
		index = *it;
		i = 0;
		
		while (index - i > lastIndex)
		{
			if ( index - i < nbArg )
				jacobsthalIndex.push_back(index - i);
			i++;
		}
		
		lastIndex = index;
		it++;
	}

	return (jacobsthalIndex);
}

void	pMergeVector( char **av, int nbArg )
{
	clock_t	begin, end;

	begin = clock();
	
	std::vector< int >	jacobsthalSequence = buildJacobsthalVector(nbArg);
	std::vector< int >	jacobsthalIndex = buildJacobsthalIndexVector(jacobsthalSequence, nbArg);
	std::vector< int >	list;

	fillVector(av, list);

std::cout << "[Vector]\tJacobsthal's sequence:\n";
printVector( jacobsthalSequence );

std::cout << "[Vector]\tIndex calculate from Jaconsthal's sequence:\n";
printVector( jacobsthalIndex );
// printVector( list );


	end = clock();
	
	std::cout << "[Vector]\tTime to process a range of " << " elements with std::vector : ";
	std::cout << static_cast<double>(end - begin) << " us" << std::endl;
}

static std::deque< int >	buildJacobsthalDeque( int nbArg )
{
	std::deque< int >	sequence;
	int					i = 2;
	int					jacobsthalNb = 0;

	while (jacobsthalNb < nbArg)
	{
		jacobsthalNb = jacobsthal(i);
		sequence.push_back(jacobsthal(i));
		i++;
	}

	return (sequence);
}

static void	fillDeque( char **av, std::deque< int > & list )
{
	for (int i = 1; av[i]; ++i)
		list.push_back( std::atoi(av[i]) );
}

static std::deque< int >	buildJacobsthalIndexDeque( std::deque< int > jacobsthalSequence, int nbArg )
{
	int					lastIndex = -1;
	int					index = 0;
	int					i;
	std::deque< int >	jacobsthalIndex;

	std::deque< int >::const_iterator	it = jacobsthalSequence.begin();

	while (index < nbArg)
	{
		index = *it;
		i = 0;
		
		while (index - i > lastIndex)
		{
			if ( index - i < nbArg )
				jacobsthalIndex.push_back(index - i);
			i++;
		}
		
		lastIndex = index;
		it++;
	}

	return (jacobsthalIndex);
}

void	pMergeDeque( char **av, int nbArg )
{
	clock_t	begin, end;

	begin = clock();
	
	std::deque< int >	jacobsthalSequence = buildJacobsthalDeque(nbArg);
	std::deque< int >	jacobsthalIndex = buildJacobsthalIndexDeque(jacobsthalSequence, nbArg);
	std::deque< int >	list;

	fillDeque(av, list);

std::cout << "[Deque]\t\tJacobsthal's sequence:\n";
printDeque( jacobsthalSequence );

std::cout << "[Deque]\t\tIndex calculate from Jaconsthal's sequence:\n";
printDeque( jacobsthalIndex );
// printDeque( list );


	end = clock();
	
	std::cout << "[Deque]\t\tTime to process a range of " << " elements with std::deque : ";
	std::cout << static_cast<double>(end - begin) << " us" << std::endl;
}