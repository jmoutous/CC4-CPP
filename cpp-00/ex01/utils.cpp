/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:33:36 by jmoutous          #+#    #+#             */
/*   Updated: 2023/09/14 16:39:34 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

bool	stringHasPrintable(std::string string)
{
	const char	*str = string.c_str();
	int			i = 0;
	
	while (str[i]) {
		if (isprint(str[i]) && !isspace(str[i]))
			return true;
		i++;
	}
	return false;
}

