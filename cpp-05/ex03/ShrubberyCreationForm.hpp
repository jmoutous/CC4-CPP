/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:36:49 by jmoutous          #+#    #+#             */
/*   Updated: 2023/11/13 14:25:41 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
	public:
		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( ShrubberyCreationForm const & source );
		~ShrubberyCreationForm();

		void		execute( Bureaucrat const & executor ) const;
		std::string	getTarget( void ) const;

	private:
		ShrubberyCreationForm();
		ShrubberyCreationForm & operator=( ShrubberyCreationForm const & rhs );
		std::string	_target;
};

#endif
