/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:11:33 by jmoutous          #+#    #+#             */
/*   Updated: 2023/09/26 18:17:00 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main( void ) {
	std::string	brain = "HI THIS IS BRAIN";
	std::string	*stringPTR = &brain;
	std::string	&stringREF = brain;

	std::cout << "Memory address of the string brain : " << &brain << std::endl;
	std::cout << "Memory address held by stringPTR   : " << stringPTR << std::endl;
	std::cout << "Memory address of stringREF        : " << &stringREF << std::endl;

	std::cout << "\nValue of the string brain     : " << brain << std::endl;
	std::cout << "Value pointed to by stringPTR : " << *stringPTR << std::endl;
	std::cout << "Value of stringREF            : " << stringREF << std::endl;
}
