/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:43:53 by jmoutous          #+#    #+#             */
/*   Updated: 2023/09/13 18:15:39 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	annuaire;
	std::string	command;

	std::cout << "\nWelcome to your awesome PhoneBook" << std::endl;

	do {
		std::cout << "\nYou have 3 commands at your disposal : ADD, SEARCH and EXIT" << std::endl;
		std::cout << "Enter your command : ";
		std::getline (std::cin, command);
		if (std::cin.fail()) {
			std::cerr << "\n\nError: std::cin failed" << std::endl;
			annuaire.askExit();
			continue;
		}
		
		if (command == "ADD")
			annuaire.addContact();
		else if (command == "SEARCH")
			annuaire.searchContact();
		else if (command == "EXIT")
			annuaire.askExit();
		else
			std::cout << "Command '" << command << "' invalid!" << std::endl;
	} while (!annuaire.isExitAsk());
	return (0);
}