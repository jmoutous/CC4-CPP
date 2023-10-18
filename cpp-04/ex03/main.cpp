/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:38:14 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/18 14:10:57 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int	main( void ) {
	// {
	// 	Character	c1("Julien"), c2("the enemy");
	// 	Ice			i;
	// 	AMateria	*ptr_i = i.clone() ;

	// 	std::cout << std::endl;


	// 	std::cout << std::endl;

	// 	c1.equip(ptr_i);
	// 	c1.use(0,c2);
	// 	c1.showGarbage();
	// 	c1.unequip(0);
	// 	c1.equip(ptr_i);
	// 	c1.unequip(0);
	// 	c1.showGarbage();
		
	// 	std::cout << std::endl;
	// }

	// {
	// 	Character	c1("Julien"), c2("the enemy");
	// 	AMateria	*ptr_i = new Ice();

	// 	std::cout << std::endl;


	// 	std::cout << std::endl;

	// 	c1.equip(ptr_i);
	// 	c1.use(0,c2);
	// 	c1.showGarbage();
	// 	c1.unequip(0);
	// 	c1.equip(ptr_i);
	// 	c1.unequip(0);
	// 	c1.showGarbage();
		
	// 	std::cout << std::endl;
	// }

	// {
	// 	IMateriaSource* src = new MateriaSource();
	// 	src->learnMateria(new Ice());
	// 	src->learnMateria(new Cure());

	// 	ICharacter* me = new Character("me");
	// 	AMateria* tmp = NULL;

	// 	me->equip(tmp);
	// 	me->unequip(2);

	// 	std::cout << std::endl;

	// 	tmp = src->createMateria("ice");
	// 	me->equip(tmp);
	// 	tmp = src->createMateria("cure");
	// 	me->equip(tmp);
	// 	tmp = src->createMateria("ice");
	// 	me->equip(tmp);
	// 	tmp = src->createMateria("cure");
	// 	me->equip(tmp);
	// 	tmp = src->createMateria("ice");
	// 	me->equip(tmp);
	// 	tmp = src->createMateria("cure");
	// 	me->equip(tmp);
	// 	tmp = src->createMateria("fire");
	// 	me->equip(tmp);
		
	// 	std::cout << std::endl;

	// 	me->unequip(0);
	// 	me->unequip(0);
	// 	me->unequip(1);
	// 	me->unequip(7);
		
	// 	delete me;
	// 	delete src;
	// }

	{
		std::cout << "========== Subject's test ==========" << std::endl;

		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character("me");
		AMateria* tmp;

		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		
		ICharacter* bob = new Character("bob");
		
		me->use(0, *bob);
		me->use(1, *bob);
		
		delete bob;
		delete me;
		delete src;
	}

	return (0);
}