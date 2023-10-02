/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 22:10:49 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/02 12:24:27 by jmoutous         ###   ########lyon.fr   */
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
		Fixed( Fixed const & source);
		~Fixed();

		Fixed &	operator=( Fixed const & rhs);
		bool	operator>( Fixed const & rhs);
		bool	operator<( Fixed const & rhs);
		bool	operator>=( Fixed const & rhs);
		bool	operator<=( Fixed const & rhs);
		bool	operator==( Fixed const & rhs);
		bool	operator!=( Fixed const & rhs);

		int		getRawBits( void ) const;
		void	setRawBits( int const raw);
		float	toFloat( void ) const;
		int		toInt( void ) const;

	private:
		static const int	_fractionalBits;
		int					_rawBits;
};

std::ostream &	operator<<( std::ostream & o, Fixed const & fixed);

#endif