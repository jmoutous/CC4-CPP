/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:38:14 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/17 13:38:09 by jmoutous         ###   ########lyon.fr   */
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

	// {
	// 	Character	c1("Julien"), c2("Enemy");
	// 	Ice			i;
	// 	AMateria	*ptr_i = NULL;

	// 	std::cout << std::endl;

	// 	ptr_i = i.clone();

	// 	std::cout << std::endl;

	// 	c1.equip(ptr_i);
	// 	c1.use(0,c2);
	// 	i.showGarbage();
	// 	c1.unequip(0);
	// 	i.showGarbage();

	// 	std::cout << std::endl;
	// }

	{
		Character	c1("Julien"), c2("Enemy");
		Ice			i;
		AMateria	*ptr_i = NULL;
		AMateria	*ptr_j = NULL;

		std::cout << std::endl;

		ptr_i = i.clone();
		ptr_j = i.clone();

		std::cout << std::endl;

		c1.equip(ptr_i);
		c1.equip(ptr_j);
		c1.use(0,c2);
		i.showGarbage();
		c1.unequip(0);
		i.showGarbage();
		c1.unequip(0);
		c1.unequip(1);
		i.showGarbage();

		std::cout << std::endl;
	}
	
	return (0);
}