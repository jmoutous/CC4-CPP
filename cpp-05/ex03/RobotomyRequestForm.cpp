/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:02:31 by jmoutous          #+#    #+#             */
/*   Updated: 2023/11/13 14:26:24 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45) {
	// std::cout << "RobotomyRequestForm's default constructor called" << std::endl;
};

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : AForm("RobotomyRequestForm", 72, 45),
	_target(target) {
	// std::cout << "RobotomyRequestForm's constructor called" << std::endl;
};

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & source ) : AForm("RobotomyRequestForm", 72, 45), _target(source._target) {
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
	
	srand (time(NULL));
	int	random = rand() % 2;

	if (random == 0)
		std::cout << "BBBBBBBBBBBBBBBZZZZZZZZZZZZZZZZ.... " << this->_target
			<< " has been robotomized." << std::endl;
	else
		std::cout << "The robotomization of " << this->_target	<< " has failed." << std::endl;
	
};

std::string	RobotomyRequestForm::getTarget( void ) const
{
	return ( this->_target );
}
