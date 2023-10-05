/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:10:43 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/05 14:11:36 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main( void ) {
	// {
	// 	ClapTrap	a("Moutous");
	// 	ScavTrap	b("Julien");
	// 	FragTrap	c("Jmoutous");
	// 	DiamondTrap d("Malediction");

	// 	a.showStatus();
	// 	b.showStatus();
	// 	c.showStatus();
	// 	d.showStatus();
	// }
	// {
	// 	DiamondTrap a("Julien");
	// 	DiamondTrap	b(a);
	// 	DiamondTrap	c;

	// 	c = a;

	// 	a.showStatus();
	// 	b.showStatus();
	// 	c.showStatus();
	// }
	{
		DiamondTrap	a("Julien");

		std::cout << std::endl;

		a.whoAmI();
		a.showStatus();
		a.attack("the enemy");

		std::cout << std::endl;
	}
	return (0);
}
