/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:24:07 by jmoutous          #+#    #+#             */
/*   Updated: 2023/11/06 10:24:07 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	public:
		Form( std::string name, int gradeToSigne, int gradeToExecute );
		~Form();
		
		std::string const	getName( void ) const;
		bool				getIsSigned( void ) const;
		int					getGradeToSigne( void ) const;
		int					getGradeToExecute( void ) const;

		void	beSigned( Bureaucrat const & bureaucrat );

		class GradeTooHighException : public std::exception {
			public:
				virtual const char*	what( void ) const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char*	what( void ) const throw();
		};

	private:
		Form();
		Form( Form const & source );
		Form & operator=( Form const & rhs );

		std::string const	_name;
		bool				_isSigned;
		int const			_gradeToSigne;
		int const			_gradeToExecute;

};

std::ostream &	operator<<( std::ostream & flux, Form const & form);

#endif
