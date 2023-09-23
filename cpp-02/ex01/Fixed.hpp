/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 22:10:49 by jmoutous          #+#    #+#             */
/*   Updated: 2023/09/23 17:55:13 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIEXD_HPP

# include <iostream>

class Fixed {
	public:
		Fixed();
		Fixed( int const i );
		Fixed( Fixed const & source);
		~Fixed();

		Fixed &	operator=( Fixed const & rhs);

		int		getRawBits( void ) const;
		void	setRawBits( int const raw);

	private:
		static const int	_fractionalBits = 8;
		int					_fixed_point;
};

std::ostream &	operator<<( std::ostream & o, Fixed const & fixed);

#endif