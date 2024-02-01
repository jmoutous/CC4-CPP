/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 18:30:55 by jmoutous          #+#    #+#             */
/*   Updated: 2024/02/01 15:58:20 by jmoutous         ###   ########lyon.fr   */
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

	this->_array = new T[0];
	*this = source;
};

template< typename T >
Array<T>::~Array()
{
	std::cout << "Array's destructor called" << std::endl;

	delete[] (this->_array);
};

template< typename T >
Array<T> & Array<T>::operator=( Array<T> const & rhs )
{
	if (this != &rhs)
	{
		delete[] (this->_array);
		this->_size = rhs.size();
		this->_array = new T[this->_size];
		for (size_t i = 0; i < rhs.size(); ++i)
			this->_array[i] = rhs.getArray()[i];
	}

	return (*this);
};

template< typename T >
T & Array<T>::operator[]( size_t i )
{
	if ( i < 0 || i >= this->_size)
		throw IndexOutOfBonds();
	return (this->_array[i]);
};

template< typename T >
T*	Array<T>::getArray( void ) const
{
	return (this->_array);
}

template< typename T >
void	Array<T>::setArray( T* array )
{
	this->_array = array;
}

template< typename T >
size_t	Array<T>::size( void ) const
{
	return (this->_size);
}

template< typename T >
void	Array<T>::displayArray( std::string arrayName ) const
{
	for (size_t i = 0 ; i < this->_size ; ++i)
	{
		std::cout << arrayName << "[" << i << "]: "<< this->_array[i] << std::endl;
	}
}

template< typename T >
const char*	Array<T>::IndexOutOfBonds::what( void ) const throw()
{
	return ("The index is out of bounds");
};

#endif
