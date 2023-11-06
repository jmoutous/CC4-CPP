#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	public:
		AForm( std::string name, int gradeToSigne, int gradeToExecute );
		virtual ~AForm() = 0;
		
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
		AForm();
		AForm( AForm const & source );
		AForm & operator=( AForm const & rhs );

		std::string const	_name;
		bool				_isSigned;
		int const			_gradeToSigne;
		int const			_gradeToExecute;

};

std::ostream &	operator<<( std::ostream & flux, AForm const & form);

#endif
