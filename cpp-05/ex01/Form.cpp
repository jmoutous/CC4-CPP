/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:24:02 by jmoutous          #+#    #+#             */
/*   Updated: 2023/11/06 10:24:03 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Nameless"), _isSigned(false),
			_gradeToSigne(150), _gradeToExecute(150) {};

Form::Form( std::string name, int gradeToSigne, int gradeToExecute ) : _name(name), _isSigned(false),
			_gradeToSigne(gradeToSigne), _gradeToExecute(gradeToExecute)
{
	std::cout << "Form's constructor called" << std::endl;
};

Form::Form( Form const & source ) : _name(source._name), _isSigned(source._isSigned),
	_gradeToSigne(source._gradeToSigne), _gradeToExecute(source._gradeToExecute)
{
	std::cout << "Form's copy constructor called" << std::endl;
};

Form::~Form()
{
	std::cout << "Form's destructor called" << std::endl;
};

Form & Form::operator=( Form const & rhs ) {
	if (this != &rhs)
	{
		this->_isSigned = rhs._isSigned;
	}

	return (*this);
};

std::string const	Form::getName( void ) const
{
	return (this->_name);
};

bool	Form::getIsSigned( void ) const
{
	return (this->_isSigned);
};

int	Form::getGradeToSigne( void ) const
{
	return (this->_gradeToSigne);
};

int	Form::getGradeToExecute( void ) const
{
	return (this->_gradeToExecute);
};

void	Form::beSigned( Bureaucrat const & bureaucrat )
{
	if (bureaucrat.getGrade() > this->_gradeToSigne)
		throw GradeTooLowException();

	this->_isSigned = true;
};

std::ostream &	operator<<( std::ostream & flux, Form const & form)
{
	flux << "Form's name : " << form.getName() << "\n"
		<< "\tis it signed : " << form.getIsSigned() << "\n"
		<< "\tGrade to signe : " << form.getGradeToSigne() << "\n"
		<< "\tGrade to execute : " << form.getGradeToExecute() << std::endl;

	return (flux);
};

const char*	Form::GradeTooHighException::what( void ) const throw()
{
	return ("The grade is too high!");
};

const char*	Form::GradeTooLowException::what( void ) const throw()
{
	return ("The grade is too low!");
};
