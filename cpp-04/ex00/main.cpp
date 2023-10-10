/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:38:14 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/10 14:32:32 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main( void ) {
	// {
	// 	Animal	a;

	// 	a.makeSound();
	// }
	// {
	// 	Cat a;
	// 	Dog	b;

	// 	std::cout << std::endl;
	// 	a.makeSound();
	// 	b.makeSound();
	// 	std::cout << std::endl;
	// }
	// {
	// 	const Animal* meta = new Animal();
	// 	const Animal* j = new Dog();
	// 	const Animal* i = new Cat();

	// 	std::cout << std::endl;
	
	// 	std::cout << i->getType() << " " << std::endl;
	// 	i->makeSound(); //will output the cat sound!

	// 	std::cout << std::endl;

	// 	std::cout << j->getType() << " " << std::endl;
	// 	j->makeSound();

	// 	std::cout << std::endl;
	// 	meta->makeSound();
		
	// 	std::cout << std::endl;
	// 	delete meta;
	// 	delete j;
	// 	delete i;
	// }
	{
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();

		std::cout << std::endl;
	
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!

		std::cout << std::endl;
		meta->makeSound();
		
		std::cout << std::endl;
		delete meta;
		delete i;
	}
	return (0);
}