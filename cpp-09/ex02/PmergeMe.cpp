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

static bool	checkDeque( std::deque< int > list )
{
	if( list .size() < 2 )
		return ( true );

	for ( std::deque< int >::iterator it = list.begin() + 1; it != list.end(); ++it)
	{
		if ( *(it -1) > *it )
			return (false);
	}
	return ( true );
}


static bool	checkArg( char *arg )
{
	int	i = 0;

	if ( arg[i] == '+' || arg[i] == '-' )
		i++;
	
	for ( ; arg[i]; ++i )
	{
		if ( std::isdigit(arg[i]) == false )
		{
			std::cout << "Error: " << arg << " is not a valid digit" << std::endl;
			return ( false );
		}
	}
	
	return ( true );
}

static bool	isSameNb( char *nb1, char *nb2 )
{
	int	i = 0;
	int	j = 0;

	if ( nb1[i] == '+' )
		i++;

	if ( nb2[j] == '+' )
		j++;

	if ( std::strcmp(nb1 + i, nb2 + j) == 0 )
		return ( true );
	else
		return ( false );
}

static bool	isUnique( char **av, int index )
{
	for ( int i = index + 1; av[i]; ++i )
	{
		if ( isSameNb(av[index], av[i]) )
		{
			std::cout << "Error: " << av[index] << " is not unique" << std::endl;
			return ( false );
		}
	}

	return ( true );
}

bool	checkArgs( char **av )
{
	int	i = 1;

	for ( ; av[i + 1]; ++i )
	{
		if ( checkArg(av[i]) == false || isUnique(av, i) == false )
			return (false);
	}

	if ( av[i] && !av[i + 1] && checkArg(av[i]) == false )
		return ( false );
	
	return ( true );
}

static int	jacobsthal( int i )
{
	if ( i == 0 )
		return (0);
	else if ( i == 1 )
		return (1);
	else
		return ( jacobsthal(i - 1) + 2 * jacobsthal(i - 2) );
}

static std::vector< int >	buildJacobsthalVector( int nbArg )
{
	std::vector< int >	sequence;
	int					i = 2;
	int					jacobsthalNb = 0;

	while ( jacobsthalNb < nbArg )
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

	while ( index < nbArg )
	{
		index = *it;
		i = 0;
		
		while (index - i > lastIndex)
		{
			if ( index - i < nbArg )
				jacobsthalIndex.push_back( index - i );
			i++;
		}
		
		lastIndex = index;
		it++;
	}

	return ( jacobsthalIndex );
}

static void findHighVector( std::vector< int > & list, int pairsFirst, std::vector< int >::iterator & high )
{
	std::vector< int >::iterator it;
	for ( it = list.begin(); it != high; ++it )
		if ( *it == pairsFirst )
		{
			high = it;
			break;
		}
}

static int	findMiddleVector( std::vector< int >::iterator low, std::vector< int >::iterator high )
{
	int	i = 0;
	for ( std::vector< int >::iterator it = low; it != high; ++it )
		i++;

	return ( i / 2 );
}

static void	binarySearchVector( std::vector< int > & list, std::vector< int >::iterator  low, std::vector< int >::iterator high, int & item )
{
	std::vector< int >::iterator mid = low + findMiddleVector( low, high );

	if ( *low == *high || *low == *mid)
	{
		if ( item > *low )
			return ( (void) list.insert(low + 1, item) );
		else
			return ( (void) list.insert(low, item) );
	}

	if ( item > *mid )
		low = mid;
	else
		high = mid;

	binarySearchVector( list, low, high, item );
}

void	vectorAlgo( std::vector< int > & list, std::vector< int > & jacobsthalIndex )
{
	int	size = list.size();
	int	nbPair = size / 2;
	bool	oddArg = ( size % 2 == 0 ? false : true );

	std::vector< std::pair< int, int> >	pairs;
	int									oddAlone = 0;

	for ( int i = 0; i < nbPair; ++i )
	{
		std::pair< int, int >	aPair;
		int	a = list.at(0);
		int	b = list.at(1);

		if (a >  b)
		{
			aPair.first = a;
			aPair.second = b;
		}
		else
		{
			aPair.first = b;
			aPair.second = a;
		}
		list.erase(list.begin());
		list.erase(list.begin());

		pairs.push_back(aPair);
	}

	if ( list.size() == 1 )
	{
		oddAlone = list.at(0);
		list.pop_back();
	}

	// std::cout << "Before sorting:" << std::endl;
	// printDequePairs(pairs);

	std::sort( pairs.begin(), pairs.end() );

	// std::cout << "After sorting:" << std::endl;
	// printDequePairs(pairs);

	int	i = 0;
	for ( std::vector< std::pair< int, int > >::iterator it = pairs.begin(); it != pairs.end(); ++it )
	{
		int	item = pairs.at(i).first;
		list.push_back(item);
		i++;
	}

	i = 0;
	for ( std::vector< int >::iterator it = jacobsthalIndex.begin(); it != jacobsthalIndex.end(); ++it )
	{
		int item = pairs.at(jacobsthalIndex.at(i)).second;

		std::vector< int >::iterator high = list.end() - 1;
		findHighVector( list, pairs.at( jacobsthalIndex.at(i) ).first, high );
		binarySearchVector( list, list.begin(), high, item );
		i++;
	}

	if ( oddArg )
		binarySearchVector( list, list.begin(), list.end() - 1, oddAlone );
}

double	pMergeVector( char **av, int nbArg )
{
	clock_t	begin, end;

	begin = clock();
	
	std::vector< int >	jacobsthalSequence = buildJacobsthalVector( nbArg / 2 );
	std::vector< int >	jacobsthalIndex = buildJacobsthalIndexVector( jacobsthalSequence, nbArg / 2 );
	std::vector< int >	list;

	fillVector( av, list );
	vectorAlgo( list, jacobsthalIndex );

	end = clock();
	
	std::cout << "[VECTOR] After: ";
	printVector( list );
	return ( static_cast<double>(end - begin) );
}

static std::deque< int >	buildJacobsthalDeque( int nbArg )
{
	std::deque< int >	sequence;
	int					i = 2;
	int					jacobsthalNb = 0;

	while ( jacobsthalNb < nbArg )
	{
		jacobsthalNb = jacobsthal(i);
		sequence.push_back( jacobsthal(i) );
		i++;
	}

	return ( sequence );
}

static void	fillDeque( char **av, std::deque< int > & list )
{
	for ( int i = 1; av[i]; ++i )
		list.push_back( std::atoi(av[i]) );
}

static std::deque< int >	buildJacobsthalIndexDeque( std::deque< int > jacobsthalSequence, int nbArg )
{
	int					lastIndex = -1;
	int					index = 0;
	int					i;
	std::deque< int >	jacobsthalIndex;

	std::deque< int >::const_iterator	it = jacobsthalSequence.begin();

	while ( index < nbArg )
	{
		index = *it;
		i = 0;
		
		while ( index - i > lastIndex )
		{
			if ( index - i < nbArg )
				jacobsthalIndex.push_back(index - i);
			i++;
		}
		
		lastIndex = index;
		it++;
	}

	return ( jacobsthalIndex );
}

static void findHighDeque( std::deque< int > & list, int pairsFirst, std::deque< int >::iterator & high )
{
	std::deque< int >::iterator it;
	for ( it = list.begin(); it != high; ++it )
		if ( *it == pairsFirst )
		{
			high = it;
			break;
		}
}

static int	findMiddleDeque( std::deque< int >::iterator low, std::deque< int >::iterator high)
{
	int	i = 0;
	for ( std::deque< int >::iterator it = low; it != high; ++it )
		i++;

	return ( i / 2 );
}

static void	binarySearchDeque( std::deque< int > & list, std::deque< int >::iterator  low, std::deque< int >::iterator high, int & item)
{
	std::deque< int >::iterator mid = low + findMiddleDeque( low, high );

	if ( *low == *high || *low == *mid )
	{
		if ( item > *high )
			return ( (void) list.insert(high + 1, item) );
		else if ( item > *low )
			return ( (void) list.insert(low + 1, item) );
		else
			return ( (void) list.insert(low, item) );
	}
	
	if ( item > *mid )
		low = mid;
	else
		high = mid;

	binarySearchDeque( list, low, high, item );
}

std::deque< int >	fromPairsToDeque( std::deque< std::pair< int, int> > & pairs )
{
	std::deque< int >	dequeList;

	for ( std::deque< std::pair< int, int> >::iterator it = pairs.begin(); it != pairs.end(); ++it )
		dequeList.push_back(it->first);

	return ( dequeList );
}

void	dequeAlgo( std::deque< int > & list, std::deque< int > & jacobsthalIndex )
{
	int	size = list.size();
	int	nbPair = size / 2;
	bool	oddArg = ( size % 2 == 0 ? false : true );

	std::deque< std::pair< int, int> >	pairs;
	int									oddAlone = 0;

	for ( int i = 0; i < nbPair; ++i )
	{
		std::pair< int, int >	aPair;
		int	a = list.at(0);
		int	b = list.at(1);

		if ( a >  b )
		{
			aPair.first = a;
			aPair.second = b;
		}
		else
		{
			aPair.first = b;
			aPair.second = a;
		}
		list.pop_front();
		list.pop_front();

		pairs.push_back(aPair);
	}

	if ( list.size() == 1 )
	{
		oddAlone = list.at(0);
		list.pop_back();
	}

	std::cout << "Before sorting:" << std::endl;
	printDequePairs(pairs);
	
	if ( pairs.size() > 2)
	{
		std::deque< int >	toBeSorted = fromPairsToDeque(pairs);
		dequeAlgo(toBeSorted, jacobsthalIndex);
	}
	else
	{
		if ( pairs.at(0).first > pairs.at(1).first )
			std::swap(pairs.at(0), pairs.at(1));
	}

	std::cout << "After sorting:" << std::endl;
	printDequePairs(pairs);

	int	i = 0;
	for ( std::deque< std::pair< int, int > >::iterator it = pairs.begin(); it != pairs.end(); ++it )
	{
		int	item = pairs.at(i).first;
		list.push_back(item);
		i++;
	}

	i = 0;
	for ( std::deque< int >::iterator it = jacobsthalIndex.begin(); it != jacobsthalIndex.end(); ++it )
	{
		int item = pairs.at(jacobsthalIndex.at(i)).second;

		std::deque< int >::iterator high = list.end() - 1;
		findHighDeque(list, pairs.at(jacobsthalIndex.at(i)).first, high);
		binarySearchDeque(list, list.begin(), high, item);
		i++;
	}

	if ( oddArg )
		binarySearchDeque( list, list.begin(), list.end() - 1, oddAlone );
}

double	pMergeDeque( char **av, int nbArg )
{
	clock_t	begin, end;

	begin = clock();
	
	std::deque< int >	jacobsthalSequence = buildJacobsthalDeque( nbArg / 2 );
	std::deque< int >	jacobsthalIndex = buildJacobsthalIndexDeque( jacobsthalSequence, nbArg / 2 );
	std::deque< int >	list;

	fillDeque( av, list );
	dequeAlgo( list, jacobsthalIndex );

	end = clock();

	std::cout << (checkDeque( list ) ? "\033[1;32m" : "\033[1;31m") << "[DEQUE]  After: ";
	printDeque( list );
	return ( static_cast<double>(end - begin) );
}