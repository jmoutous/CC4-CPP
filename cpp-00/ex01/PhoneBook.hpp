/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:44:18 by jmoutous          #+#    #+#             */
/*   Updated: 2023/09/12 15:30:09 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
class	Contact {

	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;

	public:
		Contact();
		~Contact();
};

class	PhoneBook {

	public:
		PhoneBook();
		~PhoneBook();
		bool	isExitAsk() const;
		void	askExit();

	private:
		Contact	_people[8];
		bool	_exit;
		int		_nbContact;
		int		_nextContactSlot;
};

#endif