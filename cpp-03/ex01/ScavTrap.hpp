/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:11:00 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/05 13:08:28 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap();
		ScavTrap( std::string name );
		ScavTrap( ScavTrap const & source );
		~ScavTrap();

		ScavTrap & operator=( ScavTrap const & rhs );

		void	attack( const std::string& target );
		void	showStatus( void );
		void	guardGate( void );

};

#endif