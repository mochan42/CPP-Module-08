	/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 12:41:25 by mochan            #+#    #+#             */
/*   Updated: 2023/04/04 20:22:58 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <cstdlib> // for srand() and rand()
#include <algorithm>
#include <vector>
#include <numeric>

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
		void	betterAddNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int		shortestSpan(void);
		int		longestSpan(void);

		class CollectionAlreadyFullException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("\033[0;31mThe collection is already full, cannot add more numbers!");
				}
		};

	private:
		// MEMBER ATTRIBUTES
		unsigned int		_N; // max number of elements in the Span
		std::vector<int>	_collection;
		
};


#endif