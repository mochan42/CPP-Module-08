/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 12:41:25 by mochan            #+#    #+#             */
/*   Updated: 2023/04/04 12:41:27 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>

#include "Span.h"

class TargetNotFound : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return ("Target not found!");
		}
};
#endif