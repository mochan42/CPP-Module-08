/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:55:00 by mochan            #+#    #+#             */
/*   Updated: 2023/04/03 17:41:55 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
#define EASYFIND_TPP

#include "easyfind.hpp"
#include <algorithm>

//======== CONSTRUCTORS =========================================================================
template <typename T>
Easyfind<T>::Easyfind() :
	_size(0), _Easyfind(NULL)
{
	std::cout << BLU << "Default constructor called from Easyfind" << D << "\n";
}

template <typename T>
Easyfind<T>::Easyfind(unsigned int n) :
	_size(n), _Easyfind(new T[n])
{
	std::cout << BLU << "Parameterized constructor called from Easyfind" << D << "\n";
}

template <typename T>
Easyfind<T>::Easyfind(const Easyfind& src) :
	_size(src._size), _Easyfind(new T[src._size])
{
	std::cout << BLU << "Copy constructor called from Easyfind" << D << "\n";
	for (unsigned int i = 0; i < this->_size; i++)
		this->_Easyfind[i] = src._Easyfind[i];
}


//======== OVERLOAD OPERATORS ===================================================================
template <typename T>
Easyfind<T>&  Easyfind<T>::operator=(const Easyfind& src)
{
	std::cout << BLU << "Copy assignment operator called from Easyfind" << D << "\n";
	this->_size = src._size;
	if (_Easyfind != NULL)
		delete [] _Easyfind;
	this->_Easyfind = new T[this->_size];
	for (unsigned int i = 0; i < this->_size; i++)
		this->_Easyfind[i] = src._Easyfind[i];
	return (*this);
}


//======== DESTRUCTOR ==========================================================================
template <typename T>
Easyfind<T>::~Easyfind()
{
	std::cout << CY << "Destructor called from Easyfind" << D << "\n";
	delete[] _Easyfind;
}


//======== GETTER / SETTER =====================================================================
template <typename T>
unsigned int	Easyfind<T>::size(void)
{
	return (this->_size);
}


//======== MEMBER FUNCTIONS ====================================================================
template <typename T>
void	Easyfind<T>::printElements(void)
{
	if (_size == 0)
		std::cout << "Empty Easyfind!" << "\n";
	else
	{
		for (unsigned int i = 0; i < this->size(); i++)
		{
			if (i != this->size() - 1)
				std::cout << _Easyfind[i] << " / ";
			else
				std::cout << _Easyfind[i] << "\n";
		}
		
	}
}


//======== FUNCTIONS ===========================================================================
template < typename T >
bool	easyfind(T container, int target)
{
	return (container == target);
}


#endif