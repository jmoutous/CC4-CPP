/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:38:43 by jmoutous          #+#    #+#             */
/*   Updated: 2023/09/09 13:38:00 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	int	i = 1;

	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (av[i])
		{
			std::string sentence (av[i]);

			for (std::string::iterator str=sentence.begin(); str!=sentence.end(); str++)
				std::cout << (char)toupper(*str);
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}
