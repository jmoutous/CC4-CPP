/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 15:07:35 by jmoutous          #+#    #+#             */
/*   Updated: 2023/09/22 17:22:04 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL__HPP
# define HARL_HPP

# include <iostream>

class Harl
{
	private:
		void	debug( void ) const {
			std::cout << "\n[ DEBUG ]\n\"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\"" << std::endl;
		}
		void	info( void ) const {
			std::cout << "\n[ INFO ]\n\"I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\""<< std::endl;
		}
		void	warning( void ) const {
			std::cout << "\n[ WARNING ]\n\"I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\"" << std::endl;
		}
		void	error( void ) const {
			std::cout << "\n[ ERROR ]\n\"This is unacceptable! I want to speak to the manager now.\"" << std::endl;
		}

	public:
		Harl();
		~Harl();
		void	complain( std::string level ) const;
};

#endif