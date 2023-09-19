/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:53:54 by jmoutous          #+#    #+#             */
/*   Updated: 2023/09/19 16:52:15 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB {
	private:
		std::string	_name;
		Weapon		*_weapon;
	
	public:
		HumanB(std::string name);
		~HumanB();
		void	attack() const;
		void	setWeapon(Weapon &weapon);
};

#endif