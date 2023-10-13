/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:40:06 by jmoutous          #+#    #+#             */
/*   Updated: 2023/10/12 16:21:44 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {
	public:
		Brain();
		Brain( Brain const & source );
		~Brain();

		Brain & operator=( Brain const & rhs );

		void		setIdeas( int ideaNb, std::string oneIdea );
		std::string	getIdeas( int ideaNb );

	private:
		std::string    _ideas[100];

};

#endif
