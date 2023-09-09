/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 18:36:44 by jmoutous          #+#    #+#             */
/*   Updated: 2023/09/09 22:26:46 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

Contact::Contact( void ) {

	std::cout << "Contact constructor called" << std::endl;
	return ;
}

Contact::~Contact( void ) {

	std::cout << "Contact destructor called" << std::endl;
	return ;
}

PhoneBook::PhoneBook( void ) {

	std::cout << "PhoneBook constructor called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook( void ) {

	std::cout << "PhoneBook destructor called" << std::endl;
	return ;
}
