/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 10:30:04 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/16 17:55:39 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AMateria.hpp"

class AMateria;

class ICharacter {
	public:
		virtual ~ICharacter() {};

		virtual std::string const &	getName( void ) const = 0;
		virtual void 				equip(AMateria* m) = 0;
		virtual void 				unequip(int idx) = 0;
		virtual void 				use(int idx, ICharacter& target) = 0;

};

class Character : public ICharacter{
	public:
		Character();
		Character( Character const & source );
		Character( std::string name );
		~Character();

		Character & operator=( Character const & rhs );

		std::string const &	getName( void ) const;
		void 				equip(AMateria* m);
		void 				unequip(int idx);
		void 				use(int idx, ICharacter& target);


	private:
		std::string	_name;
		AMateria*	_materia[4];

};

#endif
