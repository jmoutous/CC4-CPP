/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:10:43 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/04 15:07:24 by jmoutous         ###   ########lyon.fr   */
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
	// }
	{
		ScavTrap	a("Julien");

		a.showStatus();
	}
	// {
	// 	ScavTrap	a("Julien");

	// 	a.guardGate();
	// }
	return (0);
}
