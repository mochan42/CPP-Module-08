/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 12:41:25 by mochan            #+#    #+#             */
/*   Updated: 2023/04/04 19:23:28 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <algorithm>
#include <vector>

#include "Span.h"

class Span
{
	public:
		// CONSTRUCTOR
		Span();
		Span(unsigned int N);
		Span(const Span& src);
		
		// DESTRUCTOR
		~Span();

		// OVERLOAD OPERATOR
		Span&	operator=(const Span& src);
		
		// GETTER - SETTER
		int	getN(void);

		// MEMBER FUNCTIONS
		void	printArrayElements(void);
		void	addNumber(int setNumberValue);

		class OutOfRangeException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Index is out of range!");
				}
		};

	private:
		// MEMBER ATTRIBUTES
		unsigned int		_N; // max number of elements in the Span
		std::vector<int>	_collection;
		
};


#endif