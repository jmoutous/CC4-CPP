/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:27:30 by jmoutous          #+#    #+#             */
/*   Updated: 2023/11/07 13:26:23 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int	main()
{
	// {
	// 	Bureaucrat	a("Julien", 34);

	// 	std::cout << std::endl;
		
	// 	std::cout << a << std::endl;
	// }

	{
		Bureaucrat	ju("Julien", 150);
		AForm*	a = new PresidentialPardonForm("lol");
		AForm*	b = new ShrubberyCreationForm("lol");
		AForm*	c = new RobotomyRequestForm("lol");

		ju.signForm(*b);
		ju.executeForm(*b);

		delete a;
		delete b;
		delete c;
	}

	return (0);
}