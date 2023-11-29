/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:00:38 by jmoutous          #+#    #+#             */
/*   Updated: 2023/11/29 13:47:47 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <iomanip>
# include <cctype>
# include <cstdlib>

class ScalarConverter {
	public:
		static void	convert( std::string toBeConverted );

	private:
		ScalarConverter();
		ScalarConverter( ScalarConverter const & source );
		~ScalarConverter();

		ScalarConverter & operator=( ScalarConverter const & rhs );

};

#endif
