/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:43:53 by jmoutous          #+#    #+#             */
/*   Updated: 2023/09/09 22:06:43 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	annuaire;

	annuaire.people->getInfo("first name");
	return (0);
}