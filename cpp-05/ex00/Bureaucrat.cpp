/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:21:39 by jmoutous          #+#    #+#             */
/*   Updated: 2023/11/07 13:33:00 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {};

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name) {
	std::cout << "Bureaucrat's constructor called" << std::endl;

	if( grade < 1 )
	{
		throw GradeTooHighException();
	}
	if( grade > 150 )
	{
		throw GradeTooLowException();
	}
	this->_grade = grade;
	
};

Bureaucrat::Bureaucrat( Bureaucrat const & source ) : _name(source.getName()), _grade(source.getGrade()) {
	std::cout << "Bureaucrat's copy constructor called" << std::endl;
};

Bureaucrat & Bureaucrat::operator=( Bureaucrat const & rhs ) {
	if (this != &rhs)
	{
		this->_grade = rhs._grade;
	}

	return (*this);
};

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat's destructor called" << std::endl;
};

std::string	Bureaucrat::getName( void ) const
{
	return (this->_name);
};

int			Bureaucrat::getGrade( void ) const
{
	return (this->_grade);
};

void		Bureaucrat::incrementGrade( void )
{
	if( this->_grade - 1 < 1 )
	{
		throw GradeTooHighException();
	}
	else 
	{
		this->_grade--;
	}
};

void		Bureaucrat::incrementGrade( int increment )
{
	if( this->_grade - increment < 1 )
	{
		throw GradeTooHighException();
	}
	else 
	{
		this->_grade -= increment;
	}
};

void		Bureaucrat::decrementGrade( void )
{
	if( this->_grade + 1 > 150 )
	{
		throw GradeTooLowException();
	}
	else 
	{
		this->_grade++;
	}
};

void		Bureaucrat::decrementGrade( int decrement )
{
	if( this->_grade + decrement > 150 )
	{
		throw GradeTooLowException();
	}
	else 
	{
		this->_grade += decrement;
	}
};

std::ostream &	operator<<( std::ostream & flux, Bureaucrat const & bureaucrat)
{
	flux << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade()
		<< "." << std::endl;

	return (flux);
};

const char*	Bureaucrat::GradeTooHighException::what( void ) const throw()
{
	return ("Error! The grade is too high: the maximun grade is 1!");
};

const char*	Bureaucrat::GradeTooLowException::what( void ) const throw()
{
	return ("Error! The grade is too low: the minimum grade is 150!");
};
