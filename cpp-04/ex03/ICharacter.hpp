/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:02:21 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/13 17:10:31 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include <iostream>

class ICharacter {
	public:
		ICharacter();
		ICharacter( ICharacter const & source );
		~ICharacter();

		ICharacter & operator=( ICharacter const & rhs );

	private:
		std::string	_name;

};

#endif
