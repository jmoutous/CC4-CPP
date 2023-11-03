/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:21:38 by jmoutous          #+#    #+#             */
/*   Updated: 2023/11/03 16:14:21 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>

class Bureaucrat {
	public:
		Bureaucrat( std::string name, int grade );
		Bureaucrat( Bureaucrat const & source );
		~Bureaucrat();
	
		Bureaucrat & operator=( Bureaucrat const & rhs );

		std::string	getName( void ) const;
		int			getGrade( void ) const;
		void		incrementGrade( void );
		void		incrementGrade( int increment );
		void		decrementGrade( void );
		void		decrementGrade( int decrement );

		class GradeTooHighException : public std::exception {
			public:
				virtual const char*	what( void ) const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char*	what( void ) const throw();
		};

	private:
		Bureaucrat();
		std::string const	_name;
		int					_grade;

};

std::ostream &	operator<<( std::ostream & flux, Bureaucrat const & bureaucrat);

#endif
