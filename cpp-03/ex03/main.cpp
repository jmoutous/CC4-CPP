/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:10:43 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/04 17:09:33 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main( void ) {
	// {
	// 	DiamondTrap	a("Julien");

	// 	std::cout << std::endl;

	// 	a.whoAmI();

	// 	std::cout << std::endl;
	// }
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
	{
		DiamondTrap a("Julien");
		DiamondTrap	b(a);
		DiamondTrap	c;

		c = a;

		a.showStatus();
		b.showStatus();
		c.showStatus();
	}
	return (0);
}
