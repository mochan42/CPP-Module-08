/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moninechan <moninechan@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 12:40:00 by mochan            #+#    #+#             */
/*   Updated: 2023/04/04 23:05:46 by moninechan       ###   ########.fr       */
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
	
	{
		std::cout << YELL << "\n====== Shortest and Longest Spans ==============================" << D << "\n";
		std::cout << PU << "Creating a collection of 5 elements" << D << "\n";
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "Shortest Span is\t: " << sp.shortestSpan() << "\n";
		std::cout << "Longest Span is\t\t: " << sp.longestSpan() << "\n";
		
	}

	{
		std::cout << YELL << "\n====== Very big Span ==============================" << D << "\n";
		std::cout << PU << "Creating a collection of 20 000 elements" << D << "\n";
		std::vector<int> bigVector;
		Span bigSpan = Span(12000);

		srand(1);
		for (int i = 0; i < 12000; i++)
		{
			try
			{
				bigVector.push_back(rand());
			}
			catch (std::exception &e)
			{
				std::cout << e.what() << std::endl;
			}
		}

		try
		{
			bigSpan.betterAddNumber(bigVector.begin(),bigVector.end());
			bigSpan.printArrayElements();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	return 0;
}