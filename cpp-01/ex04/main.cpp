/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:23:58 by jmoutous          #+#    #+#             */
/*   Updated: 2023/09/21 14:33:08 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(int ac, char **av){
	if (ac != 4){
		std::cerr << "Error:\nUsage: <filename> <string1> <string2>" << std::endl;
		return 1;
	}
	return 0;
}