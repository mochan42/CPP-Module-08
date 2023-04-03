/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moninechan <moninechan@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:55:00 by mochan            #+#    #+#             */
/*   Updated: 2023/04/04 00:11:28 by moninechan       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
#define EASYFIND_TPP

#include "easyfind.hpp"
#include <algorithm>
#include <vector>
#include <list>

//======== FUNCTIONS ===========================================================================
template < typename T >
unsigned long	easyfind(T container, int target)
{
	unsigned long	index;
	
	index = 0;
	typename T::const_iterator	it;
	typename T::const_iterator	ite = container.end();
	for (it =  container.begin(); it != ite; it++)
	{
		index++;
		if (*it == target)
		{
			break;
			return (index - 1);
		}
	}
	return (index - 1);
}

template < typename T >
void	printElements(T container)
{
	typename T::const_iterator	it;
	typename T::const_iterator	ite = container.end();
	for (it =  container.begin(); it != ite; it++)
	{
		if (it != ite)
			std::cout << *it << " - ";
		else
			std::cout << *it << "\n";
	}
}

#endif