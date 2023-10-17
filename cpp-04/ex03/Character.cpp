/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 10:30:01 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/17 17:58:30 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	std::cout << "Character's default constructor called" << std::endl;

	this->_materias[0] = NULL;
	this->_materias[1] = NULL;
	this->_materias[2] = NULL;
	this->_materias[3] = NULL;
};

Character::Character( Character const & source ) {
	std::cout << "Character's copy constructor called" << std::endl;

		*this = source;
};

Character::Character( std::string name ) : _name(name) {
	std::cout << "Character's constructor called for " << name << std::endl;
	
	this->_materias[0] = NULL;
	this->_materias[1] = NULL;
	this->_materias[2] = NULL;
	this->_materias[3] = NULL;
};


Character::~Character() {
	std::cout << "Character's destructor called" << std::endl;

	for(int i = 0; i < 3; i++) {
		if(this->_materias[i] != NULL) {
			delete this->_materias[i];
		}
	}
};

Character & Character::operator=( Character const & rhs ) {
	if (this != &rhs) {
		this->_name = rhs._name;
		for(int i = 0; i < 4; i++) {
			if(_materias[i])
				delete _materias[i];
			_materias[i] = rhs._materias[i]->clone();
		}
	}

	return (*this);
};

std::string const &	Character::getName( void ) const {
	return (this->_name);
};

void 				Character::equip(AMateria* m) {
	for(int i = 0; i < 3; i++) {
		if(this->_materias[i] == NULL) {
			this->_materias[i] = m;
			return ;
		}
	}

	std::cout << "Character's slots are full" << std::endl;
};

void 				Character::unequip(int idx) {
	if(this->_materias[idx]) {
		this->_materias[idx]->throwMateria(_materias[idx]);
		this->_materias[idx] = NULL;
	}
	else
		std::cout << "The slot " << idx << " is empty!" << std::endl;
};

void 				Character::use(int idx, ICharacter& target) {
	if(this->_materias[idx]) {
		this->_materias[idx]->use(target);
	}
	else
		std::cout << "The slot " << idx << " is empty!" << std::endl;
};

