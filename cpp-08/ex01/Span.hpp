/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 17:18:12 by jmoutous          #+#    #+#             */
/*   Updated: 2024/02/05 14:23:30 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <climits>

class Span {
	public:
		Span( unsigned int N );
		Span( Span const & source );
		~Span();

		Span & operator=( Span const & rhs );

		void	addNumber( int number );
		void	addNumber( int begin, int end );
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

	private:
		Span();
		int				*_list;
		unsigned int	_nbIntSlot;
		unsigned int	_nbIntStored;

};

#endif
