/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 12:40:07 by mochan            #+#    #+#             */
/*   Updated: 2023/04/04 18:40:03 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

//======== CONSTRUCTORS =========================================================================
Span::Span() :
	_N(0), _array(NULL)
{
	std::cout << BLU << "Default constructor called from Span" << D << "\n";
}

Span::Span(int N) :
	_N(N), _array(new int[N])
{
	std::cout << BLU << "Parameterized constructor called from Span" << D << "\n";
}

Span::Span(const Span& src) :
	_N(src._N), _array(new int[src._N])
{
	std::cout << BLU << "Copy constructor called from Span" << D << "\n";
	for (int i = 0; i < _N; i++)
		this->_array[i] = src._array[i];
}

//======== OVERLOAD OPERATORS ===================================================================
Span&	Span::operator=(const Span& src)
{
	std::cout << BLU << "Copy assignment operator called from Span" << D << "\n";
	this->_N = src._N;
	if (_array != NULL)
		delete [] _array;
	this->_array = new int[this->_N];
	for (int i = 0; i < _N; i++)
		this->_array[i] = src._array[i];
	return (*this);
}

int&	Span::operator[](int index)
{
	if (index < 0 || index > (this->_N - 1))
		throw OutOfRangeException();
	return (this->_array[index]);
}


//======== DESTRUCTOR ===========================================================================
Span::~Span()
{
	std::cout << CY << "Destructor called from Span" << D << "\n";
	delete [] _array;
}

//======== GETTER / SETTER ======================================================================
int	Span::getN(void)
{
	return (_N);
}



//======== MEMBER FUNCTIONS =====================================================================
void	Span::printArrayElements(void)
{
	if (_N == 0)
		std::cout << "Empty Array" << "\n";
	else
	{
		for (int i = 0; i < this->getN(); i++)
		{
			if (i != this->getN() - 1)
				std::cout << _array[i] << " / ";
			else
				std::cout << _array[i] << "\n";
		}
		
	}
}

