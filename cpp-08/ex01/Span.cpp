/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 17:18:10 by jmoutous          #+#    #+#             */
/*   Updated: 2024/02/05 14:24:54 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	std::cout << "Span's default constructor called" << std::endl;
};

Span::Span( unsigned int N )
{
	std::cout << "Span's constructor called" << std::endl;

	this->_nbIntSlot = N;
	this->_nbIntStored = 0;
	this->_list = new int[N];
};

Span::Span( Span const & source )
{
	std::cout << "Span's copy constructor called" << std::endl;

		this->_list = new int[0];
		*this = source;
};

Span::~Span()
{
	std::cout << "Span's destructor called" << std::endl;

	delete[] this->_list;
};

Span & Span::operator=( Span const & rhs )
{
	if (this != &rhs)
	{
		delete[] (this->_list);
		this->_nbIntSlot = rhs._nbIntSlot;
		this->_nbIntStored = rhs._nbIntStored;
		this->_list = new int[this->_nbIntSlot];

		for (unsigned int i = 0; i < this->_nbIntSlot; ++i)
		{
			this->_list[i] = rhs._list[i];
		}
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

void	Span::addNumber( int number )
{
	if (this->_nbIntStored >= this->_nbIntSlot)
		throw	SpanFull();

	this->_list[this->_nbIntStored] = number;
	this->_nbIntStored++;
}

void	Span::addNumber( int begin, int end )
{
	while (begin <= end)
	{
		if (this->_nbIntStored >= this->_nbIntSlot)
			throw	SpanFull();

		this->_list[this->_nbIntStored] = begin;
		this->_nbIntStored++;
		begin++;
	}
}

void	Span::display( std::string name ) const
{
	std::cout << "Content of the Span " << name << std::endl;
	for (unsigned int i = 0; i < this->_nbIntSlot; ++i)
	{
		std::cout << name << "[" << i << "]= " << this->_list[i] << std::endl;
	}
	
	std::cout << std::endl;
}

unsigned int	Span::shortestSpan( void ) const
{
	if ( this->_nbIntStored <= 1)
		throw ErrorShort();

	unsigned int	shortest = UINT_MAX;

	for (unsigned int i = 0; i + 1 < this->_nbIntStored; ++i)
	{
		for (unsigned int j = i + 1; j < this->_nbIntStored; ++j)
		{
			unsigned int	range;

			if (this->_list[i] > this->_list[j])
				range = this->_list[i] - this->_list[j];
			else
				range = this->_list[j] - this->_list[i];

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

	unsigned int	longest = 0;

	for (unsigned int i = 0; i + 1 < this->_nbIntStored; ++i)
	{
		for (unsigned int j = i + 1; j < this->_nbIntStored; ++j)
		{
			unsigned int	range;

			if (this->_list[i] > this->_list[j])
				range = this->_list[i] - this->_list[j];
			else
				range = this->_list[j] - this->_list[i];

			if (range > longest)
				longest = range;

			if (longest == UINT_MAX)
				break ;
		}
	}

	return (longest);
}

