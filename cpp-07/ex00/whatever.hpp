/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 10:54:48 by jmoutous          #+#    #+#             */
/*   Updated: 2024/02/01 16:13:28 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template< typename T >
void	swap(T & a, T & b)
{
	T	temp = a;

	a = b;
	b = temp;
}

template< typename T >
T const &	min(T const & x, T const & y)
{
	return ( x >= y ? y : x);
}

template< typename T >
T const &	max(T const & x, T const & y)
{
	return ( x <= y ? y : x);
}

#endif
