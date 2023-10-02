/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 22:10:49 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/02 16:14:09 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
	public:
		Fixed();
		Fixed( int const i );
		Fixed( float const f );
		Fixed( const Fixed & source);
		~Fixed();

		Fixed &	operator=( const Fixed & rhs);
		bool	operator>( const Fixed & rhs) const;
		bool	operator<( const Fixed & rhs) const;
		bool	operator>=( const Fixed & rhs) const;
		bool	operator<=( const Fixed & rhs) const;
		bool	operator==( const Fixed & rhs) const;
		bool	operator!=( const Fixed & rhs) const;

		Fixed	operator+( const Fixed & rhs); 
		Fixed	operator-( const Fixed & rhs);
		Fixed	operator*( const Fixed & rhs);
		Fixed	operator/( const Fixed & rhs);
		Fixed &	operator++( void );
		Fixed	operator++(int);
		Fixed &	operator--( void );
		Fixed	operator--(int);

		int		getRawBits( void ) const;
		void	setRawBits( int const raw);
		float	toFloat( void ) const;
		int		toInt( void ) const;
		
		static Fixed &			min( Fixed & a, Fixed & b );
		static Fixed &			max( Fixed & a, Fixed & b );
		static const Fixed &	min( const Fixed & a, const Fixed & b );
		static const Fixed &	max( const Fixed & a, const Fixed & b );

	private:
		static const int	_fractionalBits;
		int					_rawBits;
};

std::ostream &	operator<<( std::ostream & o, const Fixed & fixed);

#endif