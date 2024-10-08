/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:41:36 by jmoutous          #+#    #+#             */
/*   Updated: 2023/09/26 12:51:54 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon
{
private:
	std::string	_type;

public:
	Weapon();
	Weapon(std::string type);
	~Weapon();
	std::string const &	getType() const;
	void				setType( std::string newType );
};

#endif