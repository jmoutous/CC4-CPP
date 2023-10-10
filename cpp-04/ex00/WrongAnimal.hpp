/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:38:19 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/10 14:28:18 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
	public:
		WrongAnimal();
		WrongAnimal( WrongAnimal const & source );
		virtual ~WrongAnimal();

		WrongAnimal & operator=( WrongAnimal const & rhs );

		void		setType( std::string type);
		std::string	getType( void ) const;
		void		makeSound( void ) const;

	protected:
		std::string	_type;
};

#endif