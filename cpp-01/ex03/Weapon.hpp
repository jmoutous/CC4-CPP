/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:41:36 by jmoutous          #+#    #+#             */
/*   Updated: 2023/09/18 13:44:47 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
private:
	std::string	type;

public:
	Weapon();
	~Weapon();
	std::string	getType() const;
	void		setType( std::string newType );
};

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}


#endif