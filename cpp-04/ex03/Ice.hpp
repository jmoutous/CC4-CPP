/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 17:20:29 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/13 17:32:49 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class Ice : virtual public AMateria {
	public:
		Ice();
		Ice( Ice const & source );
		~Ice();

		Ice & operator=( Ice const & rhs );

		virtual AMateria*	clone() const;
		virtual void		use(ICharacter& target);

};

#endif
