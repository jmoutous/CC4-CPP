/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:44:18 by jmoutous          #+#    #+#             */
/*   Updated: 2023/09/18 11:24:55 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <stdlib.h>
# include "Contact.hpp"

class	PhoneBook {

	private:
		Contact	_people[8];
		bool	_exit;
		int		_nbContact;
		int		_nextContactSlot;

	public:
		PhoneBook();
		~PhoneBook();
		bool	isExitAsk() const;
		void	askExit();
		void	addContact();
		void	searchContact();
};

#endif