/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:21:38 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/27 17:44:44 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat {
	public:
		Bureaucrat( std::string name, int grade );
		~Bureaucrat();

		std::string	getName( void ) const;
		int			getGrade( void ) const;
		void		incrementGrade( int increment );
		void		decrementGrade( int decrement );

		// Bureaucrat( Bureaucrat const & source );
		// Bureaucrat & operator=( Bureaucrat const & rhs );

	private:
		std::string const	_name;
		int					_grade;

};

std::ostream &	operator<<( std::ostream & flux, Bureaucrat const & bureaucrat);

#endif
