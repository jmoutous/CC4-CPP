/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:21:39 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/27 17:46:18 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name) {
	std::cout << "Bureaucrat's default constructor called" << std::endl;

	this->_grade = 150;
	
	if( grade < 1 || grade > 150 )
	{

	}
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

void		Bureaucrat::incrementGrade( int increment )
{
	if( this->_grade - increment < 1 )
	{

	}
	else 
	{
		this->_grade -= increment;
	}
};

void		Bureaucrat::decrementGrade( int decrement )
{
	if( this->_grade + decrement > 150 )
	{

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

// Bureaucrat::Bureaucrat( Bureaucrat const & source ) {
// 	std::cout << "Bureaucrat's copy constructor called" << std::endl;

// 		*this = source;
// };

// Bureaucrat & Bureaucrat::operator=( Bureaucrat const & rhs ) {
// 	if (this != &rhs)
// 		//copy every private attributes

// 	return (*this);
// };