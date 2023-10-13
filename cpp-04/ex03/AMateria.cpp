/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:43:50 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/13 17:01:37 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
	std::cout << "AMateria's default constructor called" << std::endl;
};

AMateria::AMateria( std::string const & type ) : _type(type) {
	std::cout << "AMateria's constructor called" << std::endl;
}

AMateria::AMateria( AMateria const & source ) {
	std::cout << "AMateria's copy constructor called" << std::endl;

		*this = source;
};

AMateria::~AMateria() {
	std::cout << "AMateria's destructor called" << std::endl;
};

AMateria & AMateria::operator=( AMateria const & rhs ) {
	if (this != &rhs)
		this->_type = rhs._type;

	return (*this);
};

std::string const &	AMateria::getType() const {
	return (this->_type);
};

void	AMateria::use(ICharacter& target) {
	std::cout << "AMateria's use() called" << std::endl;
};

