/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 15:07:35 by jmoutous          #+#    #+#             */
/*   Updated: 2023/09/26 13:23:49 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL__HPP
# define HARL_HPP

# include <iostream>

class Harl
{
	private:
		void	debug( void ) const;
		void	info( void ) const;
		void	warning( void ) const;
		void	error( void ) const;

	public:
		Harl();
		~Harl();
		void			complain( std::string level ) const;
		typedef void	(Harl::*function)(void) const;
};

#endif