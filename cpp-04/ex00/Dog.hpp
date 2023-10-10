/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:38:19 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/10 14:12:59 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal {
	public:
		Dog();
		Dog( Dog const & source );
		virtual ~Dog();

		Dog & operator=( Dog const & rhs );

		virtual void	makeSound( void ) const;
};

#endif