/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:48:58 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/18 13:17:22 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "Character.hpp"

class ICharacter;

class AMateria {
	public:
		AMateria();
		AMateria( AMateria const & source );
		AMateria( std::string const & type );
		virtual ~AMateria() = 0;


		std::string const &	getType() const;
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);

	protected:
		std::string 	_type;

	private:
		AMateria & operator=( AMateria const & rhs );

};

#endif
