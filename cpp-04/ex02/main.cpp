/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:38:14 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/13 15:16:33 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int	main( void ) {
	// {
	// 	std::cout << "====== Subject's test ======\n" << std::endl;

	// 	const AAnimal* j = new Dog();
	// 	const AAnimal* i = new Cat();
		
	// 	std::cout << std::endl;

	// 	delete j;//should not create a leak
	// 	delete i;
	// }
	{
		AAnimal	a;
	}
	{
		Cat	a;

		std::cout << std::endl;

		a.setIdeas(0, "I like catnip");
		std::cout << "Brain a: idea[0] = " << a.getIdeas(0) << std::endl;
		
		std::cout << std::endl;

	}

	return (0);
}