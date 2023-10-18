/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:38:14 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/18 11:31:32 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

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
		Character	c1("Julien"), c2("the enemy");
		Ice			i;
		AMateria	*ptr_i = NULL;

		std::cout << std::endl;

		ptr_i = i.clone();

		std::cout << std::endl;

		c1.equip(ptr_i);
		c1.use(0,c2);
		i.showGarbage();
		c1.unequip(0);
		i.showGarbage();

		std::cout << std::endl;
	}

	// {
	// 	IMateriaSource* src = new MateriaSource();
	// 	src->learnMateria(new Ice());
	// 	src->learnMateria(new Cure());

	// 	ICharacter* me = new Character("me");
	// 	AMateria* tmp;

	// 	tmp = src->createMateria("ice");
	// 	me->equip(tmp);
	// 	tmp = src->createMateria("cure");
	// 	me->equip(tmp);
		
	// 	ICharacter* bob = new Character("bob");
		
	// 	me->use(0, *bob);
	// 	me->use(1, *bob);
		
	// 	delete bob;
	// 	delete me;
	// 	delete src;
	// }

	return (0);
}