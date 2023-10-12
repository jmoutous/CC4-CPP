/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:40:56 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/12 16:23:22 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain's default constructor called" << std::endl;
};

Brain::Brain( Brain const & source ) {
    std::cout << "Brain's copy constructor called" << std::endl;

        *this = source;
};

Brain::~Brain() {
    std::cout << "Brain's destructor called" << std::endl;
};

Brain & Brain::operator=( Brain const & rhs ) {
    if (this != &rhs)
        *this->_ideas = *rhs._ideas;

    return (*this);
};

void		Brain::setIdeas( int ideaNb, std::string oneIdea ) {
    this->_ideas[ideaNb] = oneIdea;
}

std::string	Brain::getIdeas( int ideaNb ) {
    return (this->_ideas[ideaNb]);
}
