/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:23:58 by jmoutous          #+#    #+#             */
/*   Updated: 2023/09/22 13:47:44 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int	main(int ac, char **av){
	if (ac != 4){
		std::cerr << "Error:\nUsage: <filename> <string1> <string2>" << std::endl;
		return 1;
	}
	
	std::ifstream	infile(av[1]);
	std::string		outfile_name = av[1];
	std::string		str1 = av[2];
	std::string		str2 = av[3];
	std::string		line;
	std::size_t		found;

	outfile_name += ".replace";
	std::cout << outfile_name << std::endl;
	
	std::ofstream	outfile(outfile_name);

	while (getline(infile, line)) {
		found = line.find(str1);
		while (found != std::string::npos) {
			std::string	tmp = line.substr(0, found);

			tmp += str2;
			tmp += line.substr(found + str1.length());
			line = tmp;
			found = line.find(str1);
		}

		outfile << line << '\n';
	}
	infile.close();
	outfile.close();
	return 0;
}