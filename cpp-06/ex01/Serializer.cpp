/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:33:13 by jmoutous          #+#    #+#             */
/*   Updated: 2023/11/29 17:55:17 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {
	std::cout << "Serializer's default constructor called" << std::endl;
};

Serializer::Serializer( Serializer const & source ) {
	std::cout << "Serializer's copy constructor called" << std::endl;

		*this = source;
};

Serializer::~Serializer() {
	std::cout << "Serializer's destructor called" << std::endl;
};

Serializer & Serializer::operator=( Serializer const & rhs ) {
	if (this != &rhs)
{
		//copy every private attributes
}

	return (*this);
};

uintptr_t	Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
};

Data*	Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
};

