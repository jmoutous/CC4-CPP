/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:10:37 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/04 15:20:52 by jmoutous         ###   ########lyon.fr   */
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
		
		std::string	getName( void ) const;
		int			getHealth( void ) const;
		int			getEnergy( void ) const;
		int			getAttack( void ) const;
		void		setName( std::string name );
		void		setHealth( int health );
		void		setEnergy( int energy );
		void		setAttack( int attack );

	private:
		std::string	_name;
		int			_health;
		int			_energy;
		int			_attack;
};

#endif