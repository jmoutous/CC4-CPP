/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:27:30 by jmoutous          #+#    #+#             */
/*   Updated: 2023/11/13 14:27:06 by jmoutous         ###   ########lyon.fr   */
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
		PresidentialPardonForm	a1("lol");
		PresidentialPardonForm	a2(a1);

		std::cout << a1 << std::endl;
		std::cout << "a2's target is " << a2.getTarget() << '\n' << std::endl;

		RobotomyRequestForm	b1("mdr");
		RobotomyRequestForm	b2(b1);

		std::cout << b1 << std::endl;
		std::cout << "b2's target is " << b2.getTarget() << '\n' << std::endl;

		ShrubberyCreationForm	c1("hein");
		ShrubberyCreationForm	c2(c1);

		std::cout << c1 << std::endl;
		std::cout << "c2's target is " << c2.getTarget() << '\n' << std::endl;
	}

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
	// 	std::cout << "\n===== Grade too low to sign the form ====="<< std::endl;

	// 	Bureaucrat	ju("Julien", 150);
	// 	AForm*	a = new PresidentialPardonForm("Heart");

	// 	std::cout << "Bureaucrat " << ju.getName() << ", grade " << ju.getGrade() << std::endl;
	// 	std::cout << *a << '\n' << std::endl;

	// 	ju.signForm(*a);

	// 	std::cout << std::endl;
	// 	ju.executeForm(*a);

	// 	delete a;
	// }

	// {
	// 	std::cout << "\n===== Grade too low to execut the form ====="<< std::endl;

	// 	Bureaucrat	ju("Julien", 25);
	// 	AForm*	a = new PresidentialPardonForm("Heart");

	// 	std::cout << "Bureaucrat " << ju.getName() << ", grade " << ju.getGrade() << std::endl;
	// 	std::cout << *a << '\n' << std::endl;

	// 	ju.signForm(*a);

	// 	std::cout << std::endl;
	// 	ju.executeForm(*a);

	// 	delete a;
	// }

	// {
	// 	std::cout << "\n===== Form not signed ====="<< std::endl;

	// 	Bureaucrat	ju("Julien", 5);
	// 	AForm*	a = new PresidentialPardonForm("Heart");

	// 	std::cout << "Bureaucrat " << ju.getName() << ", grade " << ju.getGrade() << std::endl;
	// 	std::cout << *a << '\n' << std::endl;

	// 	ju.executeForm(*a);

	// 	delete a;
	// }

	// {
	// 	std::cout << "\n===== Everything works ====="<< std::endl;

	// 	Bureaucrat	ju("Julien", 5);
	// 	AForm*	a = new PresidentialPardonForm("Heart");

	// 	std::cout << "Bureaucrat " << ju.getName() << ", grade " << ju.getGrade() << std::endl;
	// 	std::cout << *a << '\n' << std::endl;

	// 	ju.signForm(*a);

	// 	std::cout << std::endl;
	// 	ju.executeForm(*a);

	// 	delete a;
	// }

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