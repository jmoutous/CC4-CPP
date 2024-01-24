/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 18:28:00 by jmoutous          #+#    #+#             */
/*   Updated: 2024/01/24 18:05:24 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template< typename T >
class Array {
	public:
		Array();
		Array( unsigned int n );
		Array( Array<T> const & source );
		~Array();

		Array<T> & operator=( Array<T> const & rhs );

		T*		getArray( void );
		size_t	size( void );

	private:
		T*		_array;
		size_t	_size;

};

# include "Array.tpp"

#endif
