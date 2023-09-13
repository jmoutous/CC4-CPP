/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:44:18 by jmoutous          #+#    #+#             */
/*   Updated: 2023/09/13 14:13:01 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"

class	PhoneBook {

	public:
		PhoneBook();
		~PhoneBook();
		bool	isExitAsk() const;
		void	askExit();
		void	addContact();
		void	searchContact() const;

	private:
		Contact	_people[8];
		bool	_exit;
		int		_nbContact;
		int		_nextContactSlot;
};

#endif