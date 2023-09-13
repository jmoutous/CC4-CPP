/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:13:12 by jmoutous          #+#    #+#             */
/*   Updated: 2023/09/13 16:40:27 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {

	std::cout << "Contact constructor called" << std::endl;
	return ;
}

Contact::~Contact() {

	std::cout << "Contact destructor called" << std::endl;
	return ;
}

void	Contact::showContact() const {
	std::cout << "\nFist name :\t\t" << this->_first_name << "\n";
	std::cout << "Last name :\t\t" << this->_last_name << "\n";
	std::cout << "Nickname :\t\t" << this->_nickname << "\n";
	std::cout << "Phone number :\t\t" << this->_phone_number << "\n";
	std::cout << "Darkest secret :\t" << this->_darkest_secret << std::endl;
}

void	Contact::showContactLine(int i) const {
	std::cout << "|" << std::setw(10) << i << "|";
	
	if (this->_first_name.length() > 10) {
		std::cout << this->_first_name.substr(0, 9) << ".";
	}
	else {
		std::cout << std::setw(10) << this->_first_name;
	}
	std::cout << "|";

	if (this->_last_name.length() > 10) {
		std::cout << this->_last_name.substr(0, 9) << ".";
	}
	else {
		std::cout << std::setw(10) << this->_last_name;
	}
	std::cout << "|";

	if (this->_nickname.length() > 10) {
		std::cout << this->_nickname.substr(0, 9) << ".";
	}
	else {
		std::cout << std::setw(10) << this->_nickname;
	}
	std::cout << "|\n";
}

bool	Contact::isContact() const {
	if (_first_name.length() == 0)
		return false;
	else
		return true;
}

void	Contact::addInfo(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string	darkest_secret) {
	this->_first_name = first_name;
	this->_last_name = last_name;
	this->_nickname = nickname;
	this->_phone_number = phone_number;
	this->_darkest_secret = darkest_secret;
}