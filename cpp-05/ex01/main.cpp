/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:27:30 by jmoutous          #+#    #+#             */
/*   Updated: 2023/11/13 13:58:17 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	// {
	// 	Bureaucrat	a("Julien", 34);
	// 	Form		b("Lul", 50, 10), c("Mdr", 10, 10);

	// 	std::cout << std::endl;
		
	// 	std::cout << a << std::endl;
	// 	std::cout << b << std::endl;
	// 	std::cout << c << std::endl;

	// 	std::cout << std::endl;

	// 	a.signForm(b);
	// 	a.signForm(c);

	// 	std::cout << std::endl;
		
	// 	std::cout << b << std::endl;
	// 	std::cout << c << std::endl;
	// }

	{
		std::cout << std::endl;

		try
		{
			Form	a("Impossible", 0, 50);

			std::cout << a << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << "Form not created: " << e.what() << std::endl;
		}

		std::cout << std::endl;

		try
		{
			Form	a("Impossible", 50, 0);

			std::cout << a << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << "Form not created: " << e.what() << std::endl;
		}

		std::cout << std::endl;

		try
		{
			Form	a("Impossible", 200, 50);

			std::cout << a << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << "Form not created: " << e.what() << std::endl;
		}

		std::cout << std::endl;

		try
		{
			Form	a("Impossible", 50, 200);

			std::cout << a << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << "Form not created: " << e.what() << std::endl;
		}

		std::cout << std::endl;
	}

	// {
	// 	try
	// 	{
	// 		Form*	a = new Form("Impossible", 0, 50);

	// 		std::cout << *a << std::endl;
			
	// 		delete a;
	// 	}
	// 	catch(const std::exception& e)
	// 	{
	// 		std::cerr << "Form not created: " << e.what() << '\n';
	// 	}
			
	// }

	return (0);
}