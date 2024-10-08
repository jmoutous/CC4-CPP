/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:38:14 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/13 14:54:05 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int	main( void ) {
	// {
	// 	Brain	a;

	// 	std::cout << std::endl;

	// 	a.setIdeas(0, "I like train");
	// 	std::cout << "Brain a: idea[0] = " << a.getIdeas(0) << std::endl;
	// 	std::cout << "Brain a: idea[1] = " << a.getIdeas(1) << "\n" << std::endl;
	// }
	// {
	// 	Brain	a,b;

	// 	std::cout << std::endl;

	// 	a.setIdeas(0, "I like train");
	// 	std::cout << "Brain a: idea[0] = " << a.getIdeas(0) << std::endl;
	// 	std::cout << "Brain b: idea[0] = " << b.getIdeas(0) << std::endl;

	// 	std::cout << std::endl;

	// 	b = a;
	// 	std::cout << "Brain a: idea[0] = " << a.getIdeas(0) << std::endl;
	// 	std::cout << "Brain b: idea[0] = " << b.getIdeas(0) << std::endl;

	// 	std::cout << std::endl;
	// }
	// {
	// 	Cat	a;

	// 	std::cout << std::endl;

	// 	a.setIdeas(0, "I like catnip");
	// 	std::cout << "Brain a: idea[0] = " << a.getIdeas(0) << std::endl;
		
	// 	std::cout << std::endl;

	// }
	// {
	// 	Cat	a,b;

	// 	std::cout << std::endl;

	// 	a.setIdeas(0, "I like food");
	// 	a.setIdeas(1, "I like catnip");
	// 	std::cout << "Brain a: idea[0] = " << a.getIdeas(0) << std::endl;
	// 	std::cout << "Brain b: idea[0] = " << b.getIdeas(0) << std::endl;
	// 	std::cout << "Brain a: idea[1] = " << a.getIdeas(1) << std::endl;
	// 	std::cout << "Brain b: idea[1] = " << b.getIdeas(1) << std::endl;

	// 	std::cout << std::endl;

	// 	b = a;
	// 	std::cout << "Brain a: idea[0] = " << a.getIdeas(0) << std::endl;
	// 	std::cout << "Brain b: idea[0] = " << b.getIdeas(0) << std::endl;
	// 	std::cout << "Brain a: idea[1] = " << a.getIdeas(1) << std::endl;
	// 	std::cout << "Brain b: idea[1] = " << b.getIdeas(1) << std::endl;

	// 	std::cout << std::endl;
	// }
	// {
	// 	Dog	a,b;

	// 	std::cout << std::endl;

	// 	a.setIdeas(0, "I like food");
	// 	a.setIdeas(1, "I like to walk outside");
	// 	std::cout << "Brain a: idea[0] = " << a.getIdeas(0) << std::endl;
	// 	std::cout << "Brain b: idea[0] = " << b.getIdeas(0) << std::endl;
	// 	std::cout << "Brain a: idea[1] = " << a.getIdeas(1) << std::endl;
	// 	std::cout << "Brain b: idea[1] = " << b.getIdeas(1) << std::endl;

	// 	std::cout << std::endl;

	// 	b = a;
	// 	std::cout << "Brain a: idea[0] = " << a.getIdeas(0) << std::endl;
	// 	std::cout << "Brain b: idea[0] = " << b.getIdeas(0) << std::endl;
	// 	std::cout << "Brain a: idea[1] = " << a.getIdeas(1) << std::endl;
	// 	std::cout << "Brain b: idea[1] = " << b.getIdeas(1) << std::endl;

	// 	std::cout << std::endl;
	// }
	{
		std::cout << "====== Subject's test ======\n" << std::endl;

		const Animal* j = new Dog();
		const Animal* i = new Cat();
		
		std::cout << std::endl;

		delete j;//should not create a leak
		delete i;
	}

	return (0);
}