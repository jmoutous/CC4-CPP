/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 18:36:44 by jmoutous          #+#    #+#             */
/*   Updated: 2023/09/12 15:30:40 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact() {

	std::cout << "Contact constructor called" << std::endl;
	return ;
}

Contact::~Contact() {

	std::cout << "Contact destructor called" << std::endl;
	return ;
}

PhoneBook::PhoneBook() : _exit(false), _nbContact(0),  _nextContactSlot(0) {

	std::cout << "PhoneBook constructor called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook() {

	std::cout << "PhoneBook destructor called" << std::endl;
	return ;
}

bool	PhoneBook::isExitAsk() const {
	return (_exit);
}

void	PhoneBook::askExit() {
	this->_exit = true;
}