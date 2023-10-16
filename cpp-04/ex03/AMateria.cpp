/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:43:50 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/16 17:33:18 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

t_floor*	AMateria::_garbage = NULL;

AMateria::AMateria() : _type("NULL") {
	std::cout << "AMateria's default constructor called" << std::endl;

	this->_garbage = new t_floor;
	this->_garbage->floor_materia = NULL;
	this->_garbage->next = NULL;
};

AMateria::AMateria( std::string const & type ) : _type(type) {
	std::cout << "AMateria's constructor called" << std::endl;

	this->_garbage = new t_floor;
	this->_garbage->floor_materia = NULL;
	this->_garbage->next = NULL;
}

AMateria::AMateria( AMateria const & source ) {
	std::cout << "AMateria's copy constructor called" << std::endl;

		*this = source;
};

AMateria::~AMateria() {
	std::cout << "AMateria's destructor called" << std::endl;

	// delete _garbage
	t_floor*	tmp;
	t_floor*	last;

	tmp = this->_garbage;

	do {
		if(tmp->floor_materia)
			delete tmp->floor_materia;
		last = tmp;
		tmp = tmp->next;
		delete last;
	} while (tmp);
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
	std::cout << "AMateria's use() called on " << target.getName() << std::endl;
};

void	AMateria::throwMateria( AMateria* m ) {
	t_floor*	tmp;

	tmp = this->_garbage;

	if(!tmp->floor_materia)
		tmp->floor_materia = m;
	else {
		tmp->next = new t_floor;
		tmp = tmp->next;
		tmp->floor_materia = m;
		tmp->next = NULL;
	}
};
