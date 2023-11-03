/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:27:30 by jmoutous          #+#    #+#             */
/*   Updated: 2023/11/03 15:12:44 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	// {
	// 	Bureaucrat	a("Julien", 50);

	// 	std::cout << "\n" << a << std::endl;

	// 	a.incrementGrade();

	// 	std::cout << "\n" << a << std::endl;

	// 	a.decrementGrade();

	// 	std::cout << "\n" << a << std::endl;
	// }

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

	{
		Bureaucrat	a("Julien", 50);

		std::cout << "\n" << a << std::endl;

		try
		{
			a.incrementGrade(101);
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
		
		std::cout << "\n" << a << std::endl;
	}

	return (0);
}