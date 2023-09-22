/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:09:50 by jmoutous          #+#    #+#             */
/*   Updated: 2023/09/22 18:00:37 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie( std::string name );
Zombie*	zombieHorde( int N, std::string name );
void randomChump( std::string name );

int	main ( void ) {
	Zombie	*horde;

	horde = zombieHorde(10, "Julien");

	std::cout << "Let's try to talk to the fourth zombie" << std::endl;
	horde[3].announce();
	std::cout << std::endl;
	
	for(int i = 0 ; i < 10 ; i++) {
		horde[i].announce();
	}

	delete[] horde;
	
	return 0;
}