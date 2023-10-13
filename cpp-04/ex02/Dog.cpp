/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:38:17 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/13 15:14:01 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal() {
	std::cout << "Dog's default constructor called" << std::endl;

	this->_type = "Dog";
	_brain = new Brain();
};

Dog::Dog( Dog const & source ) {
	std::cout << "Dog's copy constructor called" << std::endl;

	*this = source;
};

Dog::~Dog() {
	delete (this->_brain);
	std::cout << "Dog's destructor called" << std::endl;
};

Dog & Dog::operator=( Dog const & rhs ) {
	AAnimal::operator=(rhs);
	*this->_brain = *rhs._brain;
	
	return (*this);
};

void	Dog::makeSound( void ) const {
	std::cout << "Wouf!" << std::endl;
};

void	Dog::setIdeas( int ideaNb, std::string oneIdea ) {
	this->_brain->setIdeas(ideaNb, oneIdea);
};

std::string	Dog::getIdeas( int ideaNb ) {
	return (this->_brain->getIdeas(ideaNb));
}
