/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:43:53 by jmoutous          #+#    #+#             */
/*   Updated: 2023/09/12 15:23:34 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	annuaire;
	std::string	command;

	std::cout << std::endl;
	std::cout << "Welcome to your awesome PhoneBook" << std::endl;

	while (!annuaire.isExitAsk()) {
		std::cout << std::endl;
		std::cout << "You have 3 commands at your disposal : ADD, SEARCH and EXIT" << std::endl;
		std::cout << "Enter your command : ";
		std::cin >> command;
		
		if (command == "EXIT")
			annuaire.askExit();
		else
			std::cout << "Command invalid!" << std::endl;
	}
	return (0);
}