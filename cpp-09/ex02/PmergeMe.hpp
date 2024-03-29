/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:35:40 by jmoutous          #+#    #+#             */
/*   Updated: 2024/03/29 15:35:02 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <vector>
# include <deque>
# include <cstring>
# include <cstdlib>

bool		checkArgs( char **av );
void		pMergeVector( char **av, int nbArg );

template< typename T >
void printVector( std::vector< T > const & listVector)
{
	typename std::vector< T >::const_iterator	it;

	std::cout << "Before:\t";

	for (it = listVector.begin(); it != listVector.end(); ++it)
		std::cout << *it << " ";

	std::cout << std::endl;
}

#endif