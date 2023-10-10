/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:38:19 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/10 14:13:08 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {
	public:
		Animal();
		Animal( Animal const & source );
		virtual ~Animal();

		Animal & operator=( Animal const & rhs );

		void		setType( std::string type);
		std::string	getType( void ) const;
		virtual void		makeSound( void ) const;

	protected:
		std::string	_type;
};

#endif