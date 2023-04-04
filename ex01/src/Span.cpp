/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 12:40:07 by mochan            #+#    #+#             */
/*   Updated: 2023/04/04 19:24:42 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

//======== CONSTRUCTORS =========================================================================
Span::Span() :
	_N(0), _collection()
{
	std::cout << BLU << "Default constructor called from Span" << D << "\n";
}

Span::Span(unsigned int N) :
	_N(N), _collection()
{
	std::cout << BLU << "Parameterized constructor called from Span" << D << "\n";
}

Span::Span(const Span& src) :
	_N(src._N), _collection(src._collection)
{
	std::cout << BLU << "Copy constructor called from Span" << D << "\n";
}


//======== OVERLOAD OPERATORS ===================================================================
Span&	Span::operator=(const Span& src)
{
	std::cout << BLU << "Copy assignment operator called from Span" << D << "\n";
	if (this != & src) // check for self assignment
	{
		this->_N = src._N;
		this->_collection.clear();
		this->_collection.insert(this->_collection.begin(), src._collection.begin(), src._collection.end());
	}
	return (*this);
}


//======== DESTRUCTOR ===========================================================================
Span::~Span()
{
	std::cout << CY << "Destructor called from Span" << D << "\n";
}


//======== GETTER / SETTER ======================================================================
int	Span::getN(void)
{
	return (_N);
}


//======== MEMBER FUNCTIONS =====================================================================
void	Span::addNumber(int setNumberValue)
{
	_collection.push_back(setNumberValue);
}


void	Span::printArrayElements(void)
{
	if (_N == 0)
		std::cout << "Empty Array" << "\n";
	else
	{
		for (unsigned int i = 0; i < _collection.size(); i++)
		{
			if (i != _collection.size() - 1)
				std::cout << _collection[i] << " / ";
			else
				std::cout << _collection[i] << "\n";
		}
		
	}
}

