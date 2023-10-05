/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:10:43 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/05 14:47:12 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main( void ) {
	// {
	// 	ScavTrap	a("Julien");
	// }
	// {
	// 	ScavTrap	a("Julien");
	// 	ScavTrap	b(a);
	// 	ScavTrap	c;

	// 	c = a;

	// 	a.showStatus();
	// 	b.showStatus();
	// 	c.showStatus();
	// }
	// {
	// 	ClapTrap	a("Jmoutous");
	// 	ScavTrap	b("Julien");

	// 	a.showStatus();
	// 	b.showStatus();
	// }
	{
		ScavTrap	a("Julien");

		std::cout << std::endl;

		a.attack("the enemy");
		a.guardGate();
		a.guardGate();
		a.guardGate();
	
		std::cout << std::endl;
	}
	return (0);
}
