/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:57:37 by jmoutous          #+#    #+#             */
/*   Updated: 2023/11/29 18:17:23 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main( void )
{
	Data		dataInit;
	Data		*dataFin_ptr = NULL;
	uintptr_t	raw = 0;

	dataInit.name = "Julien";
	dataInit.surname = "jmoutous";
	dataInit.level = 5;

	raw = Serializer::serialize(&dataInit);
	dataFin_ptr = Serializer::deserialize(raw);

	std::cout << "Final name:\t" << dataFin_ptr->name;
	std::cout << "\n\t(Initial: " << dataInit.name << ")";

	std::cout << "\nFinal surname:\t" << dataFin_ptr->surname;
	std::cout << "\n\t(Initial: " << dataInit.surname << ")";
	
	std::cout << "\nFinal level:\t" << dataFin_ptr->level;
	std::cout << "\n\t(Initial: " << dataInit.level << ")" << std::endl;
}