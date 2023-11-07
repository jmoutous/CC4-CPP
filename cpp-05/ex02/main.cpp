/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:27:30 by jmoutous          #+#    #+#             */
/*   Updated: 2023/11/07 14:08:24 by jmoutous         ###   ########lyon.fr   */
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

		std::cout << "\n=============== ShrubberyCreationForm ===============\n"<< std::endl;

	// {
	// 	std::cout << "\n===== Grade too low to sign the form ====="<< std::endl;

	// 	Bureaucrat	ju("Julien", 150);
	// 	AForm*	a = new ShrubberyCreationForm("lol");

	// 	std::cout << "Bureaucrat " << ju.getName() << ", grade " << ju.getGrade() << std::endl;
	// 	std::cout << *a << '\n' << std::endl;

	// 	ju.signForm(*a);

	// 	std::cout << std::endl;
	// 	ju.executeForm(*a);

	// 	delete a;
	// }

	// {
	// 	std::cout << "\n===== Grade too low to execut the form ====="<< std::endl;

	// 	Bureaucrat	ju("Julien", 145);
	// 	AForm*	a = new ShrubberyCreationForm("lol");

	// 	std::cout << "Bureaucrat " << ju.getName() << ", grade " << ju.getGrade() << std::endl;
	// 	std::cout << *a << '\n' << std::endl;

	// 	ju.signForm(*a);

	// 	std::cout << std::endl;
	// 	ju.executeForm(*a);

	// 	delete a;
	// }

	// {
	// 	std::cout << "\n===== Form not signed ====="<< std::endl;

	// 	Bureaucrat	ju("Julien", 137);
	// 	AForm*	a = new ShrubberyCreationForm("lol");

	// 	std::cout << "Bureaucrat " << ju.getName() << ", grade " << ju.getGrade() << std::endl;
	// 	std::cout << *a << '\n' << std::endl;

	// 	ju.executeForm(*a);

	// 	delete a;
	// }

	// {
	// 	std::cout << "\n===== Everything works ====="<< std::endl;

	// 	Bureaucrat	ju("Julien", 137);
	// 	AForm*	a = new ShrubberyCreationForm("lol");

	// 	std::cout << "Bureaucrat " << ju.getName() << ", grade " << ju.getGrade() << std::endl;
	// 	std::cout << *a << '\n' << std::endl;

	// 	ju.signForm(*a);

	// 	std::cout << std::endl;
	// 	ju.executeForm(*a);

	// 	delete a;
	// }

	std::cout << "\n=============== RobotomyRequestForm ===============\n"<< std::endl;

	// {
	// 	std::cout << "\n===== Grade too low to sign the form ====="<< std::endl;

	// 	Bureaucrat	ju("Julien", 150);
	// 	AForm*	a = new RobotomyRequestForm("Brain");

	// 	std::cout << "Bureaucrat " << ju.getName() << ", grade " << ju.getGrade() << std::endl;
	// 	std::cout << *a << '\n' << std::endl;

	// 	ju.signForm(*a);

	// 	std::cout << std::endl;
	// 	ju.executeForm(*a);

	// 	delete a;
	// }

	// {
	// 	std::cout << "\n===== Grade too low to execut the form ====="<< std::endl;

	// 	Bureaucrat	ju("Julien", 72);
	// 	AForm*	a = new RobotomyRequestForm("Brain");

	// 	std::cout << "Bureaucrat " << ju.getName() << ", grade " << ju.getGrade() << std::endl;
	// 	std::cout << *a << '\n' << std::endl;

	// 	ju.signForm(*a);

	// 	std::cout << std::endl;
	// 	ju.executeForm(*a);

	// 	delete a;
	// }

	// {
	// 	std::cout << "\n===== Form not signed ====="<< std::endl;

	// 	Bureaucrat	ju("Julien", 45);
	// 	AForm*	a = new RobotomyRequestForm("Brain");

	// 	std::cout << "Bureaucrat " << ju.getName() << ", grade " << ju.getGrade() << std::endl;
	// 	std::cout << *a << '\n' << std::endl;

	// 	ju.executeForm(*a);

	// 	delete a;
	// }

	// {
	// 	std::cout << "\n===== Everything works ====="<< std::endl;

	// 	Bureaucrat	ju("Julien", 45);
	// 	AForm*	a = new RobotomyRequestForm("Brain");

	// 	std::cout << "Bureaucrat " << ju.getName() << ", grade " << ju.getGrade() << std::endl;
	// 	std::cout << *a << '\n' << std::endl;

	// 	ju.signForm(*a);

	// 	std::cout << std::endl;
	// 	ju.executeForm(*a);

	// 	delete a;
	// }

	std::cout << "\n=============== PresidentialPardonForm ===============\n"<< std::endl;

	// {
	// 	Bureaucrat	ju("Julien", 1);
	// 	AForm*	a = new PresidentialPardonForm("lol");
	// 	AForm*	b = new ShrubberyCreationForm("lol");
	// 	AForm*	c = new RobotomyRequestForm("lol");
	
	// 	delete a;
	// 	delete b;
	// 	delete c;
	// }

	return (0);
}