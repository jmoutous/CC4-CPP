/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 17:18:10 by jmoutous          #+#    #+#             */
/*   Updated: 2024/02/11 16:32:24 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	std::cout << "Span's default constructor called" << std::endl;
};

Span::Span( unsigned int N ) : _list(N)
{
	std::cout << "Span's constructor called" << std::endl;

	this->_nbIntSlot = N;
	this->_nbIntStored = 0;
};

Span::Span( Span const & source )
{
	std::cout << "Span's copy constructor called" << std::endl;

	*this = source;
};

Span::~Span()
{
	std::cout << "Span's destructor called" << std::endl;
};

Span & Span::operator=( Span const & rhs )
{
	if (this != &rhs)
	{
		this->_nbIntSlot = rhs._nbIntSlot;
		this->_nbIntStored = rhs._nbIntStored;
		this->_list = rhs._list;
	}

	return (*this);
};

const char*	Span::SpanFull::what( void ) const throw()
{
	return ("This span is full!");
};

const char*	Span::ErrorShort::what( void ) const throw()
{
	return ("This span has less than one number and thus shortestSpan() can't be done!");
};

const char*	Span::ErrorLong::what( void ) const throw()
{
	return ("This span has less than one number and thus longestSpan() can't be done!");
};

const char*	Span::SpanToSmall::what( void ) const throw()
{
	return ("This span is too small, in order to add this range of iterator!");
};

void	Span::addNumber( int number )
{
	if (this->_nbIntStored >= this->_nbIntSlot)
		throw	SpanFull();

	this->_list[this->_nbIntStored] = number;
	this->_nbIntStored++;
}

void	Span::display( std::string name ) const
{
	int	i = 0;
	std::cout << "Content of the Span " << name << std::endl;
	for (std::vector<int>::const_iterator it = this->_list.begin(); it != this->_list.end(); ++it)
	{
		std::cout << name << "[" << i << "]= " << *it << std::endl;
		i++;
	}
	
	std::cout << std::endl;
}

unsigned int	Span::shortestSpan( void ) const
{
	if ( this->_nbIntStored <= 1)
		throw ErrorShort();

	unsigned int	shortest = UINT_MAX;
	std::vector<int>::const_iterator	i;
	std::vector<int>::const_iterator	j;

	for (i = this->_list.begin(); i + 1 != this->_list.end(); ++i)
	{
		for (j = i + 1; j != this->_list.end(); ++j)
		{
			unsigned int	range;

			if (*i > *j)
				range = *i - *j;
			else
				range = *j - *i;

			if (range < shortest)
				shortest = range;

			if (shortest == 0)
				break ;
		}
	}

	return (shortest);
}

unsigned int	Span::longestSpan( void ) const
{
	if ( this->_nbIntStored <= 1)
		throw ErrorLong();

	std::vector<int>::const_iterator	min = min_element(this->_list.begin(), this->_list.end());
	std::vector<int>::const_iterator	max = max_element(this->_list.begin(), this->_list.end());

	unsigned int	longest = *max - *min;

	return (longest);
}

