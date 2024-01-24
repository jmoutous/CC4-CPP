/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 18:30:55 by jmoutous          #+#    #+#             */
/*   Updated: 2024/01/24 18:07:21 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_T
# define ARRAY_T

template< typename T >
Array<T>::Array()
{
	std::cout << "Array's default constructor called" << std::endl;

	this->_array = new T[0];
	this->_size = 0;
};

template< typename T >
Array<T>::Array( unsigned int n )
{
	std::cout << "Array's default constructor called" << std::endl;

	this->_array = new T[n];
	this->_size = n;
};

template< typename T >
Array<T>::Array( Array<T> const & source )
{
	std::cout << "Array's copy constructor called" << std::endl;

		*this = source;
};

template< typename T >
Array<T>::~Array()
{
	std::cout << "Array's destructor called" << std::endl;
};

template< typename T >
Array<T> & Array<T>::operator=( Array<T> const & rhs )
{
	if (this != &rhs)
	{
		for (size_t i = 0; i < rhs.size(); ++i)
			this->getArray()[i] = rhs.getArray()[i];
	}

	return (*this);
};

template< typename T >
T*	Array<T>::getArray()
{
	return (this->_array);
}

template< typename T >
size_t	Array<T>::size()
{
	return (this->_size);
}
#endif
