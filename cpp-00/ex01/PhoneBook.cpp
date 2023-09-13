/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 18:36:44 by jmoutous          #+#    #+#             */
/*   Updated: 2023/09/13 15:03:37 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _exit(false), _nbContact(0),  _nextContactSlot(0) {

	std::cout << "PhoneBook constructor called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook() {

	std::cout << "\nPhoneBook destructor called" << std::endl;
	return ;
}

bool	PhoneBook::isExitAsk() const {
	return (_exit);
}

void	PhoneBook::askExit() {
	this->_exit = true;
}

void	PhoneBook::addContact() {
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
	
	std::cout << "To add a contact, enter all informations (empty field are not allowed)" << std::endl;
	std::getline (std::cin, first_name);
	while (first_name.length() == 0) {
		std::cout << "First name : ";
		std::getline (std::cin, first_name);
	}
	while (last_name.length() == 0) {
		std::cout << "Last name : ";
		std::getline (std::cin, last_name);
	}
	while (nickname.length() == 0) {
		std::cout << "Nickname : ";
		std::getline (std::cin, nickname);
	}
	while (phone_number.length() == 0) {
		std::cout << "Phone number : ";
		std::getline (std::cin, phone_number);
	}
	while (darkest_secret.length() == 0) {
		std::cout << "Darkest secret : ";
		std::getline (std::cin, darkest_secret);
	}
	_people[_nextContactSlot].addInfo(first_name, last_name, nickname, phone_number, darkest_secret);
	if (_nbContact < 8) {
		_nbContact++;
	}
	_nextContactSlot++;
	if (_nextContactSlot > 7)
		_nextContactSlot = 0;
}

void	PhoneBook::searchContact() const {
	std::string	index_string;
	int			index_int;

	std::cout << "|**********|**********|**********|**********|\n";
	std::cout << "|   Index  |First Name|Last  Name| Nickname |\n";
	std::cout << "|**********|**********|**********|**********|\n";

	for (int i = 0; i < 8; i++) {
		if (_people[i].isContact()) {
			_people[i].showContactLine(i);
			std::cout << "|**********|**********|**********|**********|\n";
		}
		else
			break ;
	}
	std::cout << std::endl;
	std::cout << "Enter the contact's index, to show every contact's informations : ";
	std::cin >> index_string;
	index_int = index_string[0] - 48;
	if (index_string.length() > 1 || !isdigit(index_string[0]) || index_int >= this->_nbContact) {
		std::cout << "Invalid index" << std::endl;
		return ;
	}
	_people[index_int].showContact();
}