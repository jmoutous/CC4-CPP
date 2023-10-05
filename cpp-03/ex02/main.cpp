/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:10:43 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/05 13:55:43 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main( void ) {
	// {
	// 	ClapTrap	a("Moutous");
	// 	ScavTrap	b("Julien");
	// 	FragTrap	c("Jmoutous");

	// 	a.showStatus();
	// 	b.showStatus();
	// 	c.showStatus();

	// }
	// {
	// 	FragTrap	a("Julien");

	// 	std::cout << std::endl;
		
	// 	FragTrap	b(a);

	// 	std::cout << std::endl;
		
	// 	FragTrap	c;

	// 	c = a;
		
	// 	std::cout << std::endl;
	// }
	// {
	// 	FragTrap	a("Julien");
	// 	FragTrap	b(a);
	// 	FragTrap	c;

	// 	c = a;

	// 	a.showStatus();
	// 	b.showStatus();
	// 	c.showStatus();
	// }
	{
		FragTrap	a("Julien");

		a.highFivesGuys();
	}
	return (0);
}
