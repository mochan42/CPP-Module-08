/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 12:40:00 by mochan            #+#    #+#             */
/*   Updated: 2023/04/04 19:43:11 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	{
		try
		{
			std::cout << YELL << "====== Create a collection ==============================" << D << "\n";
			std::cout << PU << "Creating a collection of 3 elements and adding 3 of them" << D << "\n";
			Span	span1(3);
			span1.addNumber(42);
			span1.addNumber(21);
			span1.addNumber(97);
			span1.printArrayElements();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	{
		try
		{
			std::cout << YELL << "\n====== Catching Exceptions ==============================" << D << "\n";
			std::cout << PU << "Creating a collection of 3 elements and adding 4 of them" << D << "\n";
			Span	span1(3);
			span1.addNumber(42);
			span1.addNumber(21);
			span1.addNumber(97);
			span1.addNumber(67);
			span1.printArrayElements();
			std::cout << "\n";
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	return 0;
}