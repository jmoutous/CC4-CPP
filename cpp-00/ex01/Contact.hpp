/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:13:21 by jmoutous          #+#    #+#             */
/*   Updated: 2023/09/13 14:13:08 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
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
		void	showContact() const;
		void	showContactLine(int i) const;
		bool	isContact() const;
		void	addInfo(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string	darkest_secret);
};

#endif