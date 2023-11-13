/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:04:26 by jmoutous          #+#    #+#             */
/*   Updated: 2023/11/13 14:25:17 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	public:
		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( PresidentialPardonForm const & source );
		~PresidentialPardonForm();

		void		execute( Bureaucrat const & executor ) const;
		std::string	getTarget( void ) const;

	private:
		PresidentialPardonForm();
		PresidentialPardonForm & operator=( PresidentialPardonForm const & rhs );
		std::string	_target;
};

#endif
