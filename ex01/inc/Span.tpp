/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 12:40:23 by mochan            #+#    #+#             */
/*   Updated: 2023/04/04 12:40:38 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_TPP
#define SPAN_TPP

#include "Span.hpp"
#include <algorithm>
#include <vector>
#include <list>

//======== FUNCTIONS ================================================================
template < typename T >
long	easyfind(T container, int target)
{
	typename T::iterator it = std::find(container.begin(), container.end(), target);
	if (it != container.end())
		return std::distance(container.begin(), it);
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