/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:55:30 by mochan            #+#    #+#             */
/*   Updated: 2023/04/03 16:46:53 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>

#include "easyfind.h"

template < class T >
class Easyfind
{
    public:
		// CONSTRUCTORS - DESTRUCTOR
		Easyfind(); // Default constructor
		Easyfind(unsigned int n); // Parameterized constructor
		Easyfind(const Easyfind& src); // Copy constructor
		~Easyfind(); // Destructor

		// OVERLOAD OPERATORS
		Easyfind& operator=(const Easyfind& src);
		T &	operator[](unsigned int index);

		// GETTER - SETTER
		unsigned int	size(void);

		// MEMBER FUNCTIONS
		void			printElements(void);

		class OutOfRangeException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Index is out of range!");
				}
		};

	private:
		unsigned int	_size;
		T*				_Easyfind;
};


#endif