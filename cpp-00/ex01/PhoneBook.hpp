/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:44:18 by jmoutous          #+#    #+#             */
/*   Updated: 2023/09/09 22:26:51 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class	Contact {

	private:

		char	*_first_name;
		char	*_last_name;
		char	*_nickname;
		char	*_phone_number;
		char	*_darkest_secret;

	public:

		Contact( void );
		~Contact( void );
};

class	PhoneBook {

public:

	Contact	people[8];

	PhoneBook( void );
	~PhoneBook( void );
};

#endif