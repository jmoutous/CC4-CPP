/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:10:00 by jmoutous          #+#    #+#             */
/*   Updated: 2024/02/14 16:40:54 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <exception>
# include <map>
# include <cstdlib>
# include <ctime>
# include <sstream>
						# include "log.hpp"

std::map<std::string, double>	getDataBase( void ); 
void							process( char *infile, std::map<std::string, double> & dataBase );

#endif
