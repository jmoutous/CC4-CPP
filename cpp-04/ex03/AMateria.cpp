/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:43:50 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/17 13:36:59 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

t_floor*	AMateria::_garbage = NULL;
int			AMateria::_nbMateria = 0;

AMateria::AMateria() : _type("NULL") {
	std::cout << "AMateria's default constructor called" << std::endl;

	this->_nbMateria++;
};

AMateria::AMateria( std::string const & type ) : _type(type) {
	std::cout << "AMateria's constructor called" << std::endl;

	this->_nbMateria++;
}

AMateria::AMateria( AMateria const & source ) {
	std::cout << "AMateria's copy constructor called" << std::endl;

		*this = source;
};

AMateria::~AMateria() {
	std::cout << "AMateria's destructor called" << std::endl;
	this->_nbMateria--;

	if(_nbMateria != 0)
		return;

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

	if(!this->_garbage) {
		this->_garbage = new t_floor;
		this->_garbage->floor_materia = NULL;
		this->_garbage->next = NULL;
	}

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

void	AMateria::showGarbage( void ) {
	t_floor*	tmp;
	int			i = 0;

	tmp = this->_garbage;

	std::cout << std::endl;
	
	while(tmp){
		if(tmp->floor_materia)
			std::cout << i << " : " << tmp->floor_materia->getType() << std::endl;
		else
			std::cout << "Garbage empty" << std::endl;
		tmp = tmp->next;
		i++;
	}

	std::cout << std::endl;
}