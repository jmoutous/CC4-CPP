/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:40:04 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/13 17:41:49 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure : virtual public AMateria {
	public:
		Cure();
		Cure( Cure const & source );
		~Cure();

		Cure & operator=( Cure const & rhs );

		virtual AMateria*	clone() const;
		virtual void		use(ICharacter& target);

};

#endif
