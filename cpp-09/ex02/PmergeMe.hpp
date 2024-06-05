/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:35:40 by jmoutous          #+#    #+#             */
/*   Updated: 2024/04/12 15:40:01 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <vector>
# include <deque>
# include <utility>
# include <cstring>
# include <cstdlib>
# include <ctime>
# include <algorithm>
# include <cmath>

bool		checkArgs( char **av );
double		pMergeVector( char **av, int nbArg );
double		pMergeDeque( char **av, int nbArg );

template< typename T >
void printVector( std::vector< T > const & listVector)
{
	typename std::vector< T >::const_iterator	it;

	for (it = listVector.begin(); it != listVector.end(); ++it)
		std::cout << *it << " ";

	std::cout << "\033[0m" << std::endl;
}

template< typename T >
void printVectorPairs( std::vector< T > const & listVector)
{
	typename std::vector< T >::const_iterator	it;

	std::cout << "first:\t";
	for (it = listVector.begin(); it != listVector.end(); ++it)
		std::cout << it->first << "\t";

	std::cout << std::endl;
	
	std::cout << "second:\t";
	for (it = listVector.begin(); it != listVector.end(); ++it)
		std::cout << it->second << "\t";

	std::cout << std::endl;
}

template< typename T >
void printDeque( std::deque< T > const & listDeque)
{
	typename std::deque< T >::const_iterator	it;

	for (it = listDeque.begin(); it != listDeque.end(); ++it)
		std::cout << *it << " ";

	std::cout << "\033[0m" << std::endl;
}

template< typename T >
void printDequePairs( std::deque< T > const & listDeque)
{
	typename std::deque< T >::const_iterator	it;

	std::cout << "first:\t";
	for (it = listDeque.begin(); it != listDeque.end(); ++it)
		std::cout << it->first << "\t";

	std::cout << std::endl;
	
	std::cout << "second:\t";
	for (it = listDeque.begin(); it != listDeque.end(); ++it)
		std::cout << it->second << "\t";

	std::cout << std::endl;
}

#endif