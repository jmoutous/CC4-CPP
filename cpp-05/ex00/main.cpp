/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:27:30 by jmoutous          #+#    #+#             */
/*   Updated: 2023/11/03 15:17:16 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	{
		Bureaucrat	a("Julien", 50);

		std::cout << "\n" << a << std::endl;

		std::cout << "a.incrementGrade()";
		a.incrementGrade();

		std::cout << "\n" << a << std::endl;

		std::cout << "a.decrementGrade()";
		a.decrementGrade();

		std::cout << "\n" << a << std::endl;

		std::cout << "a.incrementGrade(49)";
		a.incrementGrade(49);

		std::cout << "\n" << a << std::endl;

		std::cout << "a.decrementGrade(149)";
		a.decrementGrade(149);

		std::cout << "\n" << a << std::endl;
	}

	// {
	// 	Bureaucrat	a("Julien", 50);

	// 	std::cout << "\n" << a << std::endl;

	// 	try
	// 	{
	// 		a.decrementGrade(101);
	// 	}
	// 	catch (std::exception & e)
	// 	{
	// 		std::cout << e.what() << std::endl;
	// 	}
		
	// 	std::cout << "\n" << a << std::endl;
	// }

	// {
	// 	Bureaucrat	a("Julien", 50);

	// 	std::cout << "\n" << a << std::endl;

	// 	try
	// 	{
	// 		a.incrementGrade(101);
	// 	}
	// 	catch (std::exception & e)
	// 	{
	// 		std::cout << e.what() << std::endl;
	// 	}
		
	// 	std::cout << "\n" << a << std::endl;
	// }

	return (0);
}