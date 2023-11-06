/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:27:30 by jmoutous          #+#    #+#             */
/*   Updated: 2023/11/06 10:19:52 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	{
		Bureaucrat	a("Julien", 34);
		Form		b("Lul", 50, 10), c("Mdr", 10, 10);

		std::cout << std::endl;
		
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;

		std::cout << std::endl;

		a.signForm(b);
		a.signForm(c);

		std::cout << std::endl;
		
		std::cout << b << std::endl;
		std::cout << c << std::endl;
	}

	return (0);
}