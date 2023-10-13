/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:38:17 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/13 15:13:52 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal() {
	std::cout << "Cat's default constructor called" << std::endl;

	this->_type = "Cat";
	_brain = new Brain();
};

Cat::Cat( Cat const & source ) {
	std::cout << "Cat's copy constructor called" << std::endl;

	*this = source;
};

Cat::~Cat() {
	delete (this->_brain);
	std::cout << "Cat's destructor called" << std::endl;
};

Cat & Cat::operator=( Cat const & rhs ) {
	AAnimal::operator=(rhs);
	*this->_brain = *rhs._brain;
	
	return (*this);
};

void	Cat::makeSound( void ) const {
	std::cout << "Miaouw!" << std::endl;
};

void	Cat::setIdeas( int ideaNb, std::string oneIdea ) {
	this->_brain->setIdeas(ideaNb, oneIdea);
};

std::string	Cat::getIdeas( int ideaNb ) {
	return (this->_brain->getIdeas(ideaNb));
}
