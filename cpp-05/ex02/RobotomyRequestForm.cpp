/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:02:31 by jmoutous          #+#    #+#             */
/*   Updated: 2023/11/07 13:35:57 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45) {
	// std::cout << "RobotomyRequestForm's default constructor called" << std::endl;
};

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : AForm("RobotomyRequestForm", 72, 45),
	_target(target) {
	// std::cout << "RobotomyRequestForm's constructor called" << std::endl;
};

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & source ) : AForm(source) {
	// std::cout << "RobotomyRequestForm's copy constructor called" << std::endl;
};

RobotomyRequestForm::~RobotomyRequestForm() {
	// std::cout << "RobotomyRequestForm's destructor called" << std::endl;
};

RobotomyRequestForm & RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs ) {
	if (this != &rhs)
{
		//copy every private attributes
}

	return (*this);
};

void	RobotomyRequestForm::execute( Bureaucrat const & executor ) const
{
	if (this->getIsSigned() == false)
		throw FormNotSigned();

	if (executor.getGrade() > this->getGradeToExecute())
		throw GradeTooLowException();
	
	
};
