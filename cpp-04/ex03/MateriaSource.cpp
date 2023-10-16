/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:58:38 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/16 18:09:28 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "MateriaSource's default constructor called" << std::endl;
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

// void 		MateriaSource::learnMateria(AMateria* m) {
	
// };

// AMateria* 	MateriaSource::createMateria(std::string const & type) {

// };

