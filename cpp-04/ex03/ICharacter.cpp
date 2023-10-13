/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:02:19 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/13 17:09:29 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter() {
	std::cout << "ICharacter's default constructor called" << std::endl;
};

ICharacter::ICharacter( ICharacter const & source ) {
	std::cout << "ICharacter's copy constructor called" << std::endl;

		*this = source;
};

ICharacter::~ICharacter() {
	std::cout << "ICharacter's destructor called" << std::endl;
};

ICharacter & ICharacter::operator=( ICharacter const & rhs ) {
	if (this != &rhs)
		//copy every private attributes

	return (*this);
};