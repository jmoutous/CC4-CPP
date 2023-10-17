/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:58:38 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/17 17:00:10 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "MateriaSource's default constructor called" << std::endl;

	this->_materia[0] = NULL;
	this->_materia[1] = NULL;
	this->_materia[2] = NULL;
	this->_materia[3] = NULL;
};

MateriaSource::MateriaSource( MateriaSource const & source ) {
	std::cout << "MateriaSource's copy constructor called" << std::endl;

		*this = source;
};

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource's destructor called" << std::endl;
};

MateriaSource & MateriaSource::operator=( MateriaSource const & rhs ) {
	if (this != &rhs) {
		//copy every private attributes
	}

	return (*this);
};

void 		MateriaSource::learnMateria(AMateria* m) {
	for(int i = 0; i < 3; i++) {
		if(this->_materia[i] == NULL) {
			this->_materia[i] = m;
			return ;
		}
	}

	std::cout << "MateriaSource's slots are full" << std::endl;
};

AMateria* 	MateriaSource::createMateria(std::string const & type) {
	AMateria*	newMateria = NULL;

	for(int i = 0; i < 3; i++) {
		if(this->_materia[i]->getType() == type) {
			newMateria = _materia[i]->clone();
			return (newMateria);
		}
	}

	std::cout << type << " is unknow to thie MateriaSource" << std::endl;
	return (NULL);
};

