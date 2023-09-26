/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:23:58 by jmoutous          #+#    #+#             */
/*   Updated: 2023/09/26 14:52:12 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

static void	ft_replace(std::ifstream &infile, char ** av) {
	std::string		str1 = av[2];
	std::string		str2 = av[3];
	std::string		outfile_name = av[1];
	std::ofstream	outfile(outfile_name += ".replace");
	std::string		line;
	std::size_t		found;

	if(outfile.fail()) {
		std::cerr << "Error:\nEnable to open or creat the outfile " << std::endl;
		return;
	}

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
	outfile.close();
}

int	main(int ac, char **av){
	if (ac != 4 || !av[2][0]){
		std::cerr << "Error:\nUsage: <filename> <string1> <string2>\n";
		std::cerr << "(strings can't be empty)" << std::endl;
		return 1;
	}
	
	std::ifstream	infile(av[1]);

	if(infile.fail()) {
		std::cerr << "Error:\nEnable to open the file " << av[1] << std::endl;
		return 1;
	}

	ft_replace(infile, av);
	infile.close();
	return 0;
}

// ./sed makefiel a aa while infinite