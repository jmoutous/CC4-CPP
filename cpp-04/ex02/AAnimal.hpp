/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:38:19 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/13 15:07:34 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class AAnimal {
	public:
		AAnimal();
		AAnimal( AAnimal const & source );
		virtual ~AAnimal() = 0;

		AAnimal & operator=( AAnimal const & rhs );

		void		setType( std::string type);
		std::string	getType( void ) const;
		virtual void		makeSound( void ) const;

	protected:
		std::string	_type;
};

#endif