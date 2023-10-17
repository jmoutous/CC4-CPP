/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:38:14 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/16 18:29:35 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int	main( void ) {
	// {
	// 	Character	c1("Julien"), c2("Enemy");
	// 	Ice			i;

	// 	std::cout << std::endl;

	// 	c1.equip(&i);
	// 	c1.use(0,c2);

	// 	std::cout << std::endl;
	// }
	{
		Character	c1("Julien"), c2("Enemy");
		Ice			i;
		AMateria	*ptr_i = NULL;

		std::cout << std::endl;

		ptr_i = i.clone();

		std::cout << std::endl;

		c1.equip(ptr_i);
		c1.use(0,c2);
		c1.unequip(0);

		std::cout << std::endl;
	}
	
	return (0);
}