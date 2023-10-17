/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:48:58 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/17 13:59:03 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "Character.hpp"

class ICharacter;
class AMateria;

typedef struct	s_floor {
	AMateria		*floor_materia;
	struct s_floor	*next;
}		t_floor;

class AMateria {
	public:
		AMateria();
		AMateria( AMateria const & source );
		AMateria( std::string const & type );
		virtual ~AMateria() = 0;


		std::string const &	getType() const;
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);

		void	throwMateria( AMateria* m );
		void	showGarbage( void );

	protected:
		std::string 	_type;
		static t_floor	*_garbage;
		static int		_nbMateria;

	private:
		AMateria & operator=( AMateria const & rhs );

};

#endif
