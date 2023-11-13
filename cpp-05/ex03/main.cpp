/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:27:30 by jmoutous          #+#    #+#             */
/*   Updated: 2023/11/13 15:24:18 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	// {
	// 	Intern	someRandomIntern;
	// 	AForm*	rrf;

	// 	rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
	// }

	// {
	// 	Bureaucrat	ju("Julien", 1);
	// 	Intern		someRandomIntern;
	// 	AForm		*a;

	// 	std::cout << std::endl;

	// 	try 
	// 	{
	// 		a = someRandomIntern.makeForm("Plop", "Nani?");
	
	// 		std::cout << std::endl;
	
	// 		ju.signForm(*a);
	
	// 		std::cout << std::endl;
	
	// 		ju.executeForm(*a);
	
	// 		delete a;
	// 	}
	// 	catch (std::exception	&e)
	// 	{
	// 		std::cerr << e.what() << std::endl;
	// 	}
	// }

	{
		Bureaucrat	ju("Julien", 1);
		Intern		someRandomIntern;
		AForm		*a, *b, *c;

		std::cout << std::endl;

		a = someRandomIntern.makeForm("ShrubberyCreationForm", "Forest");
		b = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
		c = someRandomIntern.makeForm("PresidentialPardonForm", "Heart");

		std::cout << std::endl;

		ju.signForm(*a);
		ju.signForm(*b);
		ju.signForm(*c);

		std::cout << std::endl;

		ju.executeForm(*a);
		ju.executeForm(*b);
		ju.executeForm(*c);

		delete a;
		delete b;
		delete c;
	}
	
	return (0);
}