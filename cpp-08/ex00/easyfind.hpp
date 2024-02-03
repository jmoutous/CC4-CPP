/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:16:01 by jmoutous          #+#    #+#             */
/*   Updated: 2024/02/03 17:07:15 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <vector>
# include <exception>
# include <iostream>
# include <algorithm>

class NotFound : public std::exception {
	public:
		virtual const char*	what( void ) const throw();
};

const char*	NotFound::what( void ) const throw()
{
	return ("No occurence found!");
};

template< typename T >
typename T::iterator	easyFind( T & container, int i )
{
	typename T::iterator	it = std::find(container.begin(), container.end(), i) ;

	if (it == container.end())
		throw NotFound();
	
	return (it);
}

#endif