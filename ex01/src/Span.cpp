/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 12:40:07 by mochan            #+#    #+#             */
/*   Updated: 2023/04/04 20:23:24 by mochan           ###   ########.fr       */
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
	return (this->_N);

}


//======== MEMBER FUNCTIONS =====================================================================
void	Span::addNumber(int setNumberValue)
{
	if (this->_collection.size() >= this->_N)
		throw (Span::CollectionAlreadyFullException());
	else
		this->_collection.push_back(setNumberValue);
}

void	Span::printArrayElements(void)
{
	if (_N == 0)
		std::cout << "Empty Array" << "\n";
	else
	{
		for (unsigned int i = 0; i < _collection.size(); i++)
		{
			if (i != this->_collection.size() - 1)
				std::cout << this->_collection[i] << " / ";
			else
				std::cout << this->_collection[i] << "\n";
		}
		
	}
}

int	Span::shortestSpan(void)
{
	int shortest_span;

	std::sort(this->_collection.begin(), this->_collection.end()); // sort the vector in ascending order
	std::vector<int> diffs(this->_collection.size() - 1);
	std::adjacent_difference(this->_collection.begin(), this->_collection.end(), diffs.begin()); // calculate the adjacent differences
	shortest_span = *std::min_element(diffs.begin(), diffs.end()); // find the minimum difference
	return (shortest_span);
}

int	Span::longestSpan(void)
{
	int largest = *std::max_element(this->_collection.begin(), this->_collection.end());
	int smallest = *std::min_element(this->_collection.begin(), this->_collection.end());
	return (largest - smallest);
}

void	Span::betterAddNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	while (begin < end)
	{
		try
		{
			this->addNumber(*begin);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		begin++;
	}
}