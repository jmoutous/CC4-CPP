/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 10:30:01 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/16 17:49:53 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	std::cout << "Character's default constructor called" << std::endl;

	this->_materia[0] = NULL;
	this->_materia[1] = NULL;
	this->_materia[2] = NULL;
	this->_materia[3] = NULL;
};

Character::Character( Character const & source ) {
	std::cout << "Character's copy constructor called" << std::endl;

		*this = source;
};

Character::Character( std::string name ) : _name(name) {
	std::cout << "Character's constructor called for " << name << std::endl;
	
	this->_materia[0] = NULL;
	this->_materia[1] = NULL;
	this->_materia[2] = NULL;
	this->_materia[3] = NULL;
};


Character::~Character() {
	std::cout << "Character's destructor called" << std::endl;
};

Character & Character::operator=( Character const & rhs ) {
	if (this != &rhs){
		this->_name = rhs._name;
		for(int i = 0; i < 4; i++) {
			delete _materia[i];
			_materia[i] = rhs._materia[i]->clone();
		}
	}

	return (*this);
};

std::string const &	Character::getName( void ) const {
	return (this->_name);
};

void 				Character::equip(AMateria* m) {
	std::cout << "Character's equip() called" << std::endl;

	for(int i = 0; i < 3; i++) {
		if(this->_materia[i] == NULL) {
			this->_materia[i] = m;
			return ;
		}
	}

	std::cout << "Character's equip() finished" << std::endl;
};

void 				Character::unequip(int idx) {
	if(this->_materia[idx]) {
		this->_materia[idx]->throwMateria(_materia[idx]);
		this->_materia[idx] = NULL;
	}
	else
		std::cout << "The slot " << idx << " is empty!" << std::endl;
};

void 				Character::use(int idx, ICharacter& target) {
	if(this->_materia[idx]) {
		this->_materia[idx]->use(target);
	}
	else
		std::cout << "The slot " << idx << " is empty!" << std::endl;
};

