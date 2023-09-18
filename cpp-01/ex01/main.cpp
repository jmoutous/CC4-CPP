/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:09:50 by jmoutous          #+#    #+#             */
/*   Updated: 2023/09/15 16:02:03 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie( std::string name );
Zombie*	zombieHorde( int N, std::string name );
void randomChump( std::string name );

int	main ( void ) {
	Zombie	*horde;

	horde = zombieHorde(10, "Julien");

	for(int i = 0 ; i < 10 ; i++) {
		horde[i].announce();
	}
	
	return 0;
}