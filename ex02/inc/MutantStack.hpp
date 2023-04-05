/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 23:19:17 by moninechan        #+#    #+#             */
/*   Updated: 2023/04/05 20:40:24 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include "MutantStack.h"
#include <iostream>
#include <stack>
#include <list>

template < typename T > 
class MutantStack : public std::stack< T >
{
	public:
		// CONSTRUCTORS
		MutantStack();
		MutantStack(const MutantStack& src);
		
		// OVERLOAD OPERATOR
		MutantStack& operator=(const MutantStack& src);

		// DESTRUCTOR
		~MutantStack();

		//ITERATOR TYPEDEFS
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		// ITERATOR FUNCTIONS
		iterator begin();
		iterator end();
		const_iterator begin() const;
		const_iterator end() const;
		reverse_iterator rbegin();
		reverse_iterator rend();
		const_reverse_iterator rbegin() const;
		const_reverse_iterator rend() const;
		

	private:

};

#endif