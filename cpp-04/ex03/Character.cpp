/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 10:30:01 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/18 14:05:49 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

t_floor*	Character::_garbage = NULL;
int			Character::_nbCharacter = 0;

Character::Character() {
	// std::cout << "Character's default constructor called" << std::endl;
	_nbCharacter++;

	this->_materias[0] = NULL;
	this->_materias[1] = NULL;
	this->_materias[2] = NULL;
	this->_materias[3] = NULL;
};

Character::Character( Character const & source ) {
	// std::cout << "Character's copy constructor called" << std::endl;

		*this = source;
};

Character::Character( std::string name ) : _name(name) {
	// std::cout << "Character's constructor called for " << name << std::endl;
	_nbCharacter++;
	
	this->_materias[0] = NULL;
	this->_materias[1] = NULL;
	this->_materias[2] = NULL;
	this->_materias[3] = NULL;
};


Character::~Character() {
	// std::cout << "Character's destructor called" << std::endl;

	for(int i = 0; i < 4; i++) {
		if(this->_materias[i] != NULL) {
			delete this->_materias[i];
		}
	}

	_nbCharacter--;

	if(_nbCharacter > 0)
		return;

	// delete _garbage
	t_floor*	tmp;
	t_floor*	last;

	tmp = this->_garbage;

	while (tmp) {
		if(tmp->floor_materia) {
			delete tmp->floor_materia;
		}
		last = tmp;
		tmp = tmp->next;
		delete last;
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
	if(!m) {
		std::cout << "Empty Materia can't be equip" << std::endl;
		return;
	}

	//Check is m is in the _garbage
	t_floor*	tmp = this->_garbage;

	while (tmp) {
		if(tmp->floor_materia == m) {
			std::cout << "Throwned Materia can't be equip" << std::endl;
			return;
		}
		tmp = tmp->next;
	}

	//Equip the Materia in an available slot
	for(int i = 0; i < 4; i++) {
		if(this->_materias[i] == NULL) {
			this->_materias[i] = m;
			return ;
		}
	}

	delete m;
	std::cout << "Character's slots are full! The Materia has been destroyed!" << std::endl;
};

void 				Character::unequip(int idx) {
	if(idx < 0 || idx > 3) {
		std::cout << "The slot " << idx << " does not exist!\nThe inventory has 4 slot, from slot 0 to 3!" << std::endl;
		return ;
	}
	if(this->_materias[idx]) {
		//Creat the _garbage list
		if(!this->_garbage) {
			this->_garbage = new t_floor;
			this->_garbage->floor_materia = NULL;
			this->_garbage->next = NULL;
		}

		//Put the Materia in a garbage's chain
		t_floor*	tmp = this->_garbage;

		if(!tmp->floor_materia)
			tmp->floor_materia = this->_materias[idx];
		else {
			tmp->next = new t_floor;
			tmp = tmp->next;
			tmp->floor_materia = this->_materias[idx];
			tmp->next = NULL;
		}
		this->_materias[idx] = NULL;
	}
	else
		std::cout << "The slot " << idx << " is empty!" << std::endl;
};

void	Character::use(int idx, ICharacter& target) {
	if(this->_materias[idx]) {
		this->_materias[idx]->use(target);
	}
	else
		std::cout << "The slot " << idx << " is empty!" << std::endl;
};

void	Character::showGarbage( void ) {
	t_floor*	tmp;
	int			i = 0;

	tmp = this->_garbage;

	if(!tmp) {
		std::cout << "Garbage empty\n" << std::endl;
		return ;
	}

	std::cout << "Garbage : \n";
	
	while(tmp){
		if(tmp->floor_materia)
			std::cout << i << " : " << tmp->floor_materia->getType() << std::endl;
		tmp = tmp->next;
		i++;
	}

	std::cout << std::endl;
}