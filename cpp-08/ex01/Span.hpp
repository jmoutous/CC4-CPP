/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 17:18:12 by jmoutous          #+#    #+#             */
/*   Updated: 2024/02/11 16:50:26 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <climits>
# include <vector>
# include <iterator>
# include <algorithm>

class Span {
	public:
		Span( unsigned int N );
		Span( Span const & source );
		~Span();

		Span & operator=( Span const & rhs );

		void	addNumber( int number );
		template <typename T>
		void	addNumber( T begin, T end );		
		void	display( std::string name ) const;

		unsigned int	shortestSpan( void ) const;
		unsigned int	longestSpan( void ) const;

		class SpanFull : public std::exception {
			public:
				virtual const char*	what( void ) const throw();
		};

		class ErrorShort : public std::exception {
			public:
				virtual const char*	what( void ) const throw();
		};

		class ErrorLong : public std::exception {
			public:
				virtual const char*	what( void ) const throw();
		};

		class SpanToSmall : public std::exception {
			public:
				virtual const char*	what( void ) const throw();
		};

	private:
		Span();
		std::vector<int>	_list;
		unsigned int		_nbIntSlot;
		unsigned int		_nbIntStored;

};

template <typename T>
void	Span::addNumber( T begin, T end )
{
	if (std::distance(begin, end) < this->_nbIntSlot + 1)
		this->_list.assign(begin, end);
	else
		throw SpanToSmall();
}

#endif
