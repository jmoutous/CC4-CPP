/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 17:35:40 by jmoutous          #+#    #+#             */
/*   Updated: 2024/03/27 18:27:35 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <vector>
# include <deque>
# include <cstring>

bool		checkArgs( char **av );
void		pMergeVector( char **av, int nbArg );

template< typename T >
void printVector( std::vector< T > const & listVector)
{
	typename std::vector< T >::const_iterator	it;

	for (it = listVector.begin(); it != listVector.end(); ++it)
		std::cout << *it << std::endl;
}

#endif