/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:58:38 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/18 13:59:18 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	// std::cout << "MateriaSource's default constructor called" << std::endl;

	this->_materias[0] = NULL;
	this->_materias[1] = NULL;
	this->_materias[2] = NULL;
	this->_materias[3] = NULL;
};

MateriaSource::MateriaSource( MateriaSource const & source ) {
	// std::cout << "MateriaSource's copy constructor called" << std::endl;

		*this = source;
};

MateriaSource::~MateriaSource() {
	// std::cout << "MateriaSource's destructor called" << std::endl;

	for(int i = 0; i < 4; i++) {
		if(this->_materias[i] != NULL) {
			delete this->_materias[i];
		}
	}
};

MateriaSource & MateriaSource::operator=( MateriaSource const & rhs ) {
	if (this != &rhs) {
		for(int i = 0; i < 4; i++) {
			if(_materias[i])
				delete _materias[i];
			_materias[i] = rhs._materias[i]->clone();
		}
	}
	
	return (*this);
};

void 		MateriaSource::learnMateria(AMateria* m) {
	for(int i = 0; i < 4; i++) {
		if(this->_materias[i] == NULL) {
			this->_materias[i] = m;
			return ;
		}
	}

	std::cout << "MateriaSource's slots are full" << std::endl;
};

AMateria* 	MateriaSource::createMateria(std::string const & type) {
	AMateria*	newMateria = NULL;

	for(int i = 0; i < 4; i++) {
		if(this->_materias[i] && this->_materias[i]->getType() == type) {
			newMateria = _materias[i]->clone();
			return (newMateria);
		}
	}

	std::cout << type << " is unknow to this MateriaSource" << std::endl;
	return (NULL);
};

