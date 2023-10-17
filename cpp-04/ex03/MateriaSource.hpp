/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:58:35 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/17 17:57:47 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "AMateria.hpp"

class IMateriaSource {
	public:
		virtual ~IMateriaSource() {};

		virtual void 		learnMateria(AMateria*) = 0;
		virtual AMateria* 	createMateria(std::string const & type) = 0;
};

class MateriaSource : public IMateriaSource {
	public:
		MateriaSource();
		MateriaSource( MateriaSource const & source );
		~MateriaSource();

		MateriaSource & operator=( MateriaSource const & rhs );

		void 		learnMateria(AMateria* m);
		AMateria* 	createMateria(std::string const & type);

	private:
		AMateria*	_materias[4];


};

#endif
