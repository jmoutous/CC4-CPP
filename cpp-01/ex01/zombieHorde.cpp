/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:39:52 by jmoutous          #+#    #+#             */
/*   Updated: 2023/09/26 12:40:14 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name ) {
	Zombie	*horde;

	if (N <= 0)
		return (NULL);
	
	horde = new Zombie[N];
	for(int i = 0; i < N ; i++) {
		horde[i].setName(name);
	}

	return horde;
}
