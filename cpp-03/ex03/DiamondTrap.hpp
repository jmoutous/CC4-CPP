/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:11:00 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/04 16:53:12 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	public:
		DiamondTrap();
		DiamondTrap( std::string name );
		DiamondTrap( DiamondTrap const & source );
		~DiamondTrap();

		DiamondTrap & operator=( DiamondTrap const & rhs );

		void 	attack( const std::string& target );
		void	whoAmI( void );

	private:
		std::string	_name;
};

#endif