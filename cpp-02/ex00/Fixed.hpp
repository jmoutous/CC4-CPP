/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 22:10:49 by jmoutous          #+#    #+#             */
/*   Updated: 2023/09/27 12:14:40 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIEXD_HPP

# include <iostream>

class Fixed {
	public:
		Fixed();
		Fixed( Fixed const & source);
		~Fixed();

		Fixed &	operator=( Fixed const & rhs);

		int		getRawBits( void ) const;
		void	setRawBits( int const raw);

	private:
		static const int	_fractionalBits;
		int					_rawBits;
};

#endif