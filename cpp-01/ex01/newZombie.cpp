/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:11:08 by jmoutous          #+#    #+#             */
/*   Updated: 2023/09/18 12:57:10 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie( std::string name ) {
	Zombie	*new_zombie = new Zombie(name);
	return new_zombie;
}

Zombie*	zombieHorde( int N, std::string name ) {
	Zombie	*horde;

	horde = new Zombie[N];
	for(int i = 0; i < N ; i++) {
		horde[i].setName(name);
	}

	return horde;
}
