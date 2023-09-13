/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:43:53 by jmoutous          #+#    #+#             */
/*   Updated: 2023/09/13 15:34:36 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	annuaire;
	std::string	command;

	std::cout << "\nWelcome to your awesome PhoneBook" << std::endl;

	while (!annuaire.isExitAsk()) {
		std::cout << "\nYou have 3 commands at your disposal : ADD, SEARCH and EXIT" << std::endl;
		std::cout << "Enter your command : ";
		std::cin >> command;
				if (std::cin.fail()) {
					std::cerr << "\n\nError: std::cin failed" << std::endl;
					exit(1) ;
				}
		
		if (command == "ADD")
			annuaire.addContact();
		else if (command == "SEARCH")
			annuaire.searchContact();
		else if (command == "EXIT")
			annuaire.askExit();
		else
			std::cout << "Command invalid!" << std::endl;
	}
	return (0);
}