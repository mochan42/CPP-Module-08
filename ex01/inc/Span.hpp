/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 12:41:25 by mochan            #+#    #+#             */
/*   Updated: 2023/04/04 18:40:10 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>

#include "Span.h"

class Span
{
	public:
		// CONSTRUCTOR
		Span();
		Span(int N);
		Span(const Span& src);
		
		// DESTRUCTOR
		~Span();

		// OVERLOAD OPERATOR
		Span&	operator=(const Span& src);
		int&	operator[](int index);
		
		// GETTER - SETTER
		int	getN(void);

		// MEMBER FUNCTIONS
		void	printArrayElements(void);

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
		int		_N; // number of elements in the Span
		int*	_array;
};


#endif