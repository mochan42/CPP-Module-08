/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:55:30 by mochan            #+#    #+#             */
/*   Updated: 2023/04/04 11:52:39 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>

#include "easyfind.h"

class TargetNotFound : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return ("Target not found!");
		}
};
#endif