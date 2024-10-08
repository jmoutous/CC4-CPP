/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:04:28 by jmoutous          #+#    #+#             */
/*   Updated: 2023/11/13 14:24:57 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5) {
	// std::cout << "PresidentialPardonForm's default constructor called" << std::endl;
};

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : AForm("PresidentialPardonForm", 25, 5),
	_target(target) {
	// std::cout << "PresidentialPardonForm's constructor called" << std::endl;
};

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & source ) : AForm("PresidentialPardonForm", 25, 5), _target(source._target) {
	// std::cout << "PresidentialPardonForm's copy constructor called" << std::endl;
};

PresidentialPardonForm::~PresidentialPardonForm() {
	// std::cout << "PresidentialPardonForm's destructor called" << std::endl;
};

PresidentialPardonForm & PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs ) {
	if (this != &rhs)
{
		//copy every private attributes
}

	return (*this);
};

void	PresidentialPardonForm::execute( Bureaucrat const & executor ) const
{
	if (this->getIsSigned() == false)
		throw FormNotSigned();

	if (executor.getGrade() > this->getGradeToExecute())
		throw GradeTooLowException();
	
	std::cout << "Public service announcement : " << this->_target
		<< " has been pardoned by Zaphod Beeblebrox." << std::endl;
};

std::string	PresidentialPardonForm::getTarget( void ) const
{
	return ( this->_target );
}