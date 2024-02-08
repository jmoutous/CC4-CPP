/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:31:25 by jmoutous          #+#    #+#             */
/*   Updated: 2024/02/08 13:07:16 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_T
# define MUTANTSTACK_T

template< typename T >
MutantStack<T>::MutantStack()
{
	std::cout << "MutantStack's default constructor called" << std::endl;
};

template< typename T >
MutantStack<T>::MutantStack( MutantStack<T> const & source )
{
	std::cout << "MutantStack's copy constructor called" << std::endl;

	*this = source;
};

template< typename T >
MutantStack<T> & MutantStack<T>::operator=( MutantStack<T> const & rhs )
{
	std::stack<T>::operator=(rhs);
	return (*this);
};

template< typename T >
MutantStack<T>::~MutantStack()
{
	std::cout << "MutantStack's destructor called" << std::endl;

};


template< typename T >
void	MutantStack<T>::displayStack( const std::string stackName ) const
{
	std::stack<T>	temp = *this;
	int				i = 0;

	while (!temp.empty())
	{
		std::cout << stackName << "[" << i++ << "]: "<< temp.top() << std::endl;
		temp.pop();
	}
}

template< typename T >
typename std::stack<T>::container_type::iterator	MutantStack<T>::begin( void )
{
	return (this->c.begin());
};

template< typename T >
typename std::stack<T>::container_type::iterator	MutantStack<T>::end( void )
{
	return (this->c.end());
};

template< typename T >
typename std::stack<T>::container_type::const_iterator	MutantStack<T>::cbegin( void ) const
{
	return (this->c.begin());
};

template< typename T >
typename std::stack<T>::container_type::const_iterator	MutantStack<T>::cend( void ) const
{
	return (this->c.end());
};

template< typename T >
typename std::stack<T>::container_type::reverse_iterator	MutantStack<T>::rbegin( void )
{
	return (this->c.rbegin());
};

template< typename T >
typename std::stack<T>::container_type::reverse_iterator	MutantStack<T>::rend( void )
{
	return (this->c.rend());
};

template< typename T >
typename std::stack<T>::container_type::const_reverse_iterator	MutantStack<T>::crbegin( void ) const
{
	return (this->c.rbegin());
};

template< typename T >
typename std::stack<T>::container_type::const_reverse_iterator	MutantStack<T>::crend( void ) const
{
	return (this->c.rend());
};

template< typename T >
const char*	MutantStack<T>::IndexOutOfBonds::what( void ) const throw()
{
	return ("The index is out of bounds");
}

#endif