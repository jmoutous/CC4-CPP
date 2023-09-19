/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:04:42 by jmoutous          #+#    #+#             */
/*   Updated: 2023/09/19 16:52:10 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA {
	private:
		std::string	_name;
		Weapon		&_weapon;
	
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void	attack() const;
};

#endif