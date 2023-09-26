/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:09:50 by jmoutous          #+#    #+#             */
/*   Updated: 2023/09/26 12:41:04 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie( std::string name );
Zombie*	zombieHorde( int N, std::string name );
void randomChump( std::string name );

int	main ( void ) {
	Zombie	*horde;
	int		N;

	N = 5;
	horde = zombieHorde(N, "Julien");
	if (horde == NULL)
		return 1;

	for(int i = 0 ; i < N ; i++) {
		horde[i].announce();
	}

	delete[] horde;
	
	return 0;
}