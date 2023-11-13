/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:25:25 by jmoutous          #+#    #+#             */
/*   Updated: 2023/11/13 13:47:55 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Nameless"), _isSigned(false),
			_gradeToSigne(150), _gradeToExecute(150) {};

AForm::AForm( std::string name, int gradeToSigne, int gradeToExecute ) : _name(name), _isSigned(false),
			_gradeToSigne(gradeToSigne), _gradeToExecute(gradeToExecute)
{
	// std::cout << "AForm's constructor called" << std::endl;

	if (this->_gradeToSigne < 1 || this->_gradeToExecute < 1)
		throw GradeTooHighException();
	if (this->_gradeToSigne > 150 || this->_gradeToExecute > 150)
		throw GradeTooLowException();
};

AForm::AForm( AForm const & source ) : _name(source._name), _isSigned(source._isSigned),
	_gradeToSigne(source._gradeToSigne), _gradeToExecute(source._gradeToExecute)
{
	// std::cout << "AForm's copy constructor called" << std::endl;
};

AForm::~AForm()
{
	// std::cout << "AForm's destructor called" << std::endl;
};

AForm & AForm::operator=( AForm const & rhs ) {
	if (this != &rhs)
	{
		this->_isSigned = rhs._isSigned;
	}

	return (*this);
};

std::string const	AForm::getName( void ) const
{
	return (this->_name);
};

bool	AForm::getIsSigned( void ) const
{
	return (this->_isSigned);
};

int	AForm::getGradeToSigne( void ) const
{
	return (this->_gradeToSigne);
};

int	AForm::getGradeToExecute( void ) const
{
	return (this->_gradeToExecute);
};

void	AForm::beSigned( Bureaucrat const & bureaucrat )
{
	if (bureaucrat.getGrade() > this->_gradeToSigne)
		throw GradeTooLowException();

	this->_isSigned = true;
};

std::ostream &	operator<<( std::ostream & flux, AForm const & AForm)
{
	flux << "Form's name : " << AForm.getName() << "\n"
		<< "\tis it signed : " << AForm.getIsSigned() << "\n"
		<< "\tGrade to signe : " << AForm.getGradeToSigne() << "\n"
		<< "\tGrade to execute : " << AForm.getGradeToExecute() << std::endl;

	return (flux);
};

const char*	AForm::GradeTooHighException::what( void ) const throw()
{
	return ("The grade is too high!");
};

const char*	AForm::GradeTooLowException::what( void ) const throw()
{
	return ("The grade is too low!");
};

const char*	AForm::FormNotSigned::what( void ) const throw()
{
	return ("The form is not signed!");
};
