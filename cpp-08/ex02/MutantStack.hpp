/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:30:14 by jmoutous          #+#    #+#             */
/*   Updated: 2024/02/08 13:08:55 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <exception>
# include <stack>

template< typename T >
class	MutantStack: public std::stack<T>
{
	public:
		MutantStack();
		MutantStack( MutantStack<T> const & source );
		~MutantStack();

		MutantStack & operator=( MutantStack const & rhs );

		void	displayStack( const std::string stackName ) const;

		typedef typename std::stack<T>::container_type::iterator	iterator;
		iterator	begin( void );
		iterator	end( void );

		typedef typename std::stack<T>::container_type::const_iterator	const_iterator;
		const_iterator	cbegin( void ) const;
		const_iterator	cend( void ) const;

		typedef typename std::stack<T>::container_type::reverse_iterator	reverse_iterator;
		reverse_iterator	rbegin( void );
		reverse_iterator	rend( void );

		typedef typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;
		const_reverse_iterator	crbegin( void ) const;
		const_reverse_iterator	crend( void ) const;

		class IndexOutOfBonds : public std::exception {
			public:
				virtual const char*	what( void ) const throw();
		};

};

# include "MutantStack.tpp"

#endif