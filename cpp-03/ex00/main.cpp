/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:10:43 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/04 13:08:24 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void ) {
	// {
	// 	ClapTrap a("Julien");
	// 	ClapTrap b(a);
	// 	ClapTrap c;

	// 	c = a;
	// }
	{
		ClapTrap a("Julien"), b("Sauron");

		a.showStatus();
		b.showStatus();

		a.attack("Sauron");
		a.showStatus();

		b.takeDamage(9);

		b.showStatus();

		b.beRepaired(1);
		b.beRepaired(1);
		b.beRepaired(1);
		b.beRepaired(1);
		b.beRepaired(1);
		b.beRepaired(1);
		b.beRepaired(1);
		b.beRepaired(1);

		b.showStatus();

		b.takeDamage(7); 
		
		b.showStatus();
		
		b.beRepaired(1);
		b.beRepaired(1);
		b.beRepaired(1);
		b.attack("Julien");
		b.takeDamage(8);
		b.beRepaired(1);
		b.attack("Julien");
	}
	return (0);
}
