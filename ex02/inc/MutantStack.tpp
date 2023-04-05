/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 23:33:09 by moninechan        #+#    #+#             */
/*   Updated: 2023/04/05 22:23:41 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
#define MUTANTSTACK_TPP

#include "MutantStack.hpp"


//======== CONSTRUCTORS =========================================================================
template<typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{
	std::cout << BLU << "Default constructor called from MutantStack" << D << "\n";
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack& src) : std::stack<T>(src)
{
	std::cout << BLU << "Copy constructor called from MutantStack" << D << "\n";
}


//======== OVERLOAD OPERATORS ===================================================================
// This is a shallow copy
template<typename T>
MutantStack<T>&  MutantStack<T>::operator=(const MutantStack& src)
{
	std::cout << BLU << "Copy assignment operator called from MutantStack" << D << "\n";
	std::stack<T>::operator=(src);
	return (*this);
}


//======== DESTRUCTOR ==========================================================================
template <typename T>
MutantStack<T>::~MutantStack()
{
	std::cout << CY << "Destructor called from MutantStack" << D << "\n";
}

//======== ITERATOR FUNCTIONS ==================================================================
template <typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::begin()
{
	return std::stack<T>::c.begin();
}

template <typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::end()
{
	return std::stack<T>::c.end();
}

template <typename T>
typename std::stack<T>::container_type::const_iterator MutantStack<T>::begin() const
{
	return std::stack<T>::c.begin();
}

template <typename T>
typename std::stack<T>::container_type::const_iterator MutantStack<T>::end() const
{
	return std::stack<T>::c.end();
}

template <typename T>
typename std::stack<T>::container_type::reverse_iterator MutantStack<T>::rbegin()
{
	return std::stack<T>::c.rbegin();
}

template <typename T>
typename std::stack<T>::container_type::reverse_iterator MutantStack<T>::rend()
{
	return std::stack<T>::c.rend();
}

template <typename T>
typename std::stack<T>::container_type::const_reverse_iterator MutantStack<T>::rbegin() const
{
	return std::stack<T>::c.rbegin();
}

template <typename T>
typename std::stack<T>::container_type::const_reverse_iterator MutantStack<T>::rend() const
{
	return std::stack<T>::c.rend();
}

#endif