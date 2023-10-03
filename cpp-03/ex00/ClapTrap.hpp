/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:10:37 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/03 13:07:48 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
	public:
		ClapTrap();
		ClapTrap( std::string name );
		ClapTrap( ClapTrap const & source );
		~ClapTrap();

		ClapTrap & operator=( ClapTrap const & rhs );

		void		showStatus( void );
		void 		attack( const std::string& target );
		void 		takeDamage( unsigned int amount );
		void 		beRepaired( unsigned int amount );

	private:
		std::string	_name;
		int			_health;
		int			_energy;
		int			_attack;
};

#endif