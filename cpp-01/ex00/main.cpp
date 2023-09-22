/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:09:50 by jmoutous          #+#    #+#             */
/*   Updated: 2023/09/22 17:44:08 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie( std::string name );
void randomChump( std::string name );

int	main ( void ) {
	Zombie	z1, z2("Rob");
	Zombie	*dead(NULL);

	dead = newZombie("Julien");
	randomChump("Loulou");
	z1.announce();
	z2.announce();
	dead->announce();

	delete dead;
	
	return 0;
}