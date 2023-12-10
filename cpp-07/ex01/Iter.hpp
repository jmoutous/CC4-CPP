/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 11:19:21 by jmoutous          #+#    #+#             */
/*   Updated: 2023/12/10 16:25:56 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template< typename A , typename L >
void	iter(A* array, L arrayLength, void f(A&))
{
	for (L i = 0; i < arrayLength; ++i)
	{
		f(array[i]);
	}
}

template< typename P >
void	printP(P & a)
{
	std::cout << a << "  ";
}

template< typename I >
void	increment(I & i)
{
	i++;
}

template< typename I >
void	decrease(I & i)
{
	i--;
}

#endif
