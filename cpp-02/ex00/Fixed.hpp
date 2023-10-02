/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 22:10:49 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/02 16:17:27 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
	public:
		Fixed();
		Fixed( const Fixed & source);
		~Fixed();

		Fixed &	operator=( const Fixed & rhs);

		int		getRawBits( void ) const;
		void	setRawBits( int const raw);

	private:
		static const int	_fractionalBits;
		int					_rawBits;
};

#endif