/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:36:47 by jmoutous          #+#    #+#             */
/*   Updated: 2023/11/07 13:35:41 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137) {
	// std::cout << "ShrubberyCreationForm's default constructor called" << std::endl;
};

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : AForm("ShrubberyCreationForm", 145, 137),
	_target(target) {
	// std::cout << "ShrubberyCreationForm's constructor called" << std::endl;
};

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & source ) : AForm(source) {
	// std::cout << "ShrubberyCreationForm's copy constructor called" << std::endl;
};

ShrubberyCreationForm::~ShrubberyCreationForm() {
	// std::cout << "ShrubberyCreationForm's destructor called" << std::endl;
};

ShrubberyCreationForm & ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs ) {
	if (this != &rhs)
	{
		//copy every private attributes
	}

	return (*this);
};

void	ShrubberyCreationForm::execute( Bureaucrat const & executor ) const
{
	if (this->getIsSigned() == false)
		throw FormNotSigned();

	if (executor.getGrade() > this->getGradeToExecute())
		throw GradeTooLowException();
	
	std::string		outfileName = this->_target + "_shrubbery";
	std::ofstream	outfile(outfileName.c_str());

	if(outfile.fail()) {
		std::cerr << "Error:\nEnable to open or creat the outfile " << std::endl;
		return;
	}

	outfile << "           # #### ####"			<< '\n';
    outfile << "      ### \\/#|### |/####"		<< '\n';
    outfile << "     ##\\/#/ \\||/##/_/##/_#"	<< '\n';
    outfile << "   ###  \\/###|/ \\/ # ###"		<< '\n';
    outfile << " ##_\\_#\\_\\## | #/###_/_####"	<< '\n';
    outfile << "## #### # \\ #| /  #### ##/##"	<< '\n';
    outfile << " __#_--###`  |{,###---###-~"	<< '\n';
    outfile << "           \\ }{"				<< '\n';
    outfile << "            }}{"				<< '\n';
    outfile << "            }}{"				<< '\n';
    outfile << "       ejm  {{}"				<< '\n';
    outfile << "      , -=-~{ .-^- _"			<< '\n';
    outfile << "            `}"					<< '\n';
    outfile << "             {"					<< '\n';

	outfile.close();
};
