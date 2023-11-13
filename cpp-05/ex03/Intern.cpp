/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:29:21 by jmoutous          #+#    #+#             */
/*   Updated: 2023/11/13 14:36:55 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	// std::cout << "Intern's default constructor called" << std::endl;
};

Intern::Intern( Intern const & source ) {
	// std::cout << "Intern's copy constructor called" << std::endl;

		*this = source;
};

Intern::~Intern() {
	// std::cout << "Intern's destructor called" << std::endl;
};

Intern & Intern::operator=( Intern const & rhs ) {
	if (this != &rhs)
{
		//copy every private attributes
}

	return (*this);
};

AForm*	Intern::makeForm( std::string formName, std::string target)
{
	std::string	formList[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	int			i;

	for (i = 0; i < 4; ++i)
	{
		if (formList[i] == formName)
			break;
	}

	switch (i)
	{
		case 0:
			std::cout << "Intern creates " << formName << " form." << std::endl;
			return (new ShrubberyCreationForm(target));
		case 1:
			std::cout << "Intern creates " << formName << " form." << std::endl;
			return (new RobotomyRequestForm(target));
		case 2:
			std::cout << "Intern creates " << formName << " form." << std::endl;
			return (new PresidentialPardonForm(target));
		default:
			std::cerr << formName << " doesn't exist and thus can't be created!" << std::endl;
	}

	return (NULL);
};
