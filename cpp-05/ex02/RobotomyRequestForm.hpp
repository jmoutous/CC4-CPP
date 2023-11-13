/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:02:28 by jmoutous          #+#    #+#             */
/*   Updated: 2023/11/13 14:25:47 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class RobotomyRequestForm : public AForm {
	public:
		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( RobotomyRequestForm const & source );
		~RobotomyRequestForm();

		void		execute( Bureaucrat const & executor ) const;
		std::string	getTarget( void ) const;

	private:
		RobotomyRequestForm();
		RobotomyRequestForm & operator=( RobotomyRequestForm const & rhs );
		std::string	_target;
};

#endif