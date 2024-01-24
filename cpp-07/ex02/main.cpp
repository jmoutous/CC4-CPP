/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 18:27:38 by jmoutous          #+#    #+#             */
/*   Updated: 2024/01/24 18:08:50 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main( void )
{
	// {
	// 	std::cout << "====== Array<int> ======" << std::endl;
	// 	unsigned int	n = 10;
	// 	Array<int>		a(n);

	// 	for (unsigned int i = 0; i < n; ++i)
	// 		std::cout << "a[" << i << "]= " << a.getArray()[i] << std::endl;
	// }

	{
		std::cout << "\n====== Array<char> ======" << std::endl;
		unsigned int	n = 10;
		Array<char>		a(n);

		for (unsigned int i = 0; i < n; ++i)
			std::cout << "a[" << i << "]= " << a.getArray()[i] << std::endl;
	}

	return (0);
}