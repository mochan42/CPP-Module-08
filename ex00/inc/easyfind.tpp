/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:55:00 by mochan            #+#    #+#             */
/*   Updated: 2023/04/04 11:54:38 by mochan           ###   ########.fr       */
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
long	easyfind(T container, int target)
{
	long	index;
	
	index = 0;
	typename T::const_iterator	it;
	typename T::const_iterator	ite = container.end();
	for (it =  container.begin(); it != ite; it++)
	{
		if (*it == target)
			break;
		index++;
	}
	if (index != static_cast<long>(container.size()))
		return (index);
	else
		throw TargetNotFound();
}

template < typename T >
void	printElements(T container)
{
	typename T::const_iterator it;
	typename T::const_iterator ite = container.end();

	for (it = container.begin(); it != ite; it++)
	{
		std::cout << *it;
		if (std::distance(it, ite) > 1)
			std::cout << " - ";
	}
	std::cout << std::endl;
}

#endif