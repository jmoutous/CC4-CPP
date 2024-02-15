/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RNP.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 17:15:22 by jmoutous          #+#    #+#             */
/*   Updated: 2024/02/15 16:00:30 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RNP.hpp"

void	checkElement( std::string element)
{
	if (isdigit(element[0]) == false && element != "+" && element != "-" && element != "/" && element != "*")
	{
		std::string	error = "Error: invalid element: " + element;
		throw std::runtime_error(error);
	}
}

std::string	intToString( int number )
{
	std::stringstream ss;

	ss << number;

	return (ss.str());
}

void	operation( std::stack<std::string> & stack )
{
	std::string	ops[4] = {"+", "-", "/", "*"};

	if (stack.empty())
		throw std::runtime_error("Error: invalid argument sequence");

	std::string	op = stack.top();
	stack.pop();
	if (stack.empty())
		throw std::runtime_error("Error: invalid argument sequence");

	std::string	element2 = stack.top();
	stack.pop();
	if (stack.empty())
		throw std::runtime_error("Error: invalid argument sequence");

	std::string	element1 = stack.top();
	stack.pop();

	int	i;
	for (i = 0; i < 4 ; i++)
	{
		if (op == ops[i])
			break ;
	}

	int	res;
	switch (i)
	{
	case 0:
		res = atoi(element1.c_str()) + atoi(element2.c_str());
		break;
	
	case 1:
		res = atoi(element1.c_str()) - atoi(element2.c_str());
		break;
	
	case 2:
		res = atoi(element1.c_str()) / atoi(element2.c_str());
		break;
	
	case 3:
		res = atoi(element1.c_str()) * atoi(element2.c_str());
		break;
	
	default:
		std::string	error = "Error invalid operator: " + op;
		throw std::runtime_error(error);
	}

	stack.push(intToString(res));
}

void	calculate( std::string argument )
{
	std::stack<std::string>	stack;
	size_t				index = 0;

	while (index <= argument.size())
	{
		std::string	element = argument.substr(index, 1);

		checkElement(element);

		stack.push(element);
		index += 2;
		
		if (element == "+" || element == "-" || element == "/" || element == "*")
			operation(stack);
	}

	if (stack.size() != 1 )
		throw std::runtime_error("Error: invalid argument sequence");

	std::string	result = stack.top();
	std::cout << result << std::endl;
}
