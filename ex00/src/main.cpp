/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 19:41:02 by mochan            #+#    #+#             */
/*   Updated: 2023/04/04 12:10:55 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.tpp"

int main()
{
	std::list<int>		lst1;
	int					target;

	lst1.push_back(2);
	lst1.push_back(1);
	lst1.push_back(3);
	lst1.push_back(5);
	lst1.push_back(6);
	lst1.push_back(1);
	lst1.push_back(4);
	printElements(lst1);
	try
	{
		long firstOccurence;
		std::cout << "\n";
		target = 2;
		firstOccurence = easyfind(lst1, target);
		std::cout << "Target is : " << CY <<  target << D << ". 1st occurence found at index : " << GREEN << firstOccurence << D << "\n";
		target = 1;
		firstOccurence = easyfind(lst1, target);
		std::cout << "Target is : " << CY <<  target << D << ". 1st occurence found at index : " << GREEN << firstOccurence << D << "\n";
		target = 3;
		firstOccurence = easyfind(lst1, target);
		std::cout << "Target is : " << CY <<  target << D << ". 1st occurence found at index : " << GREEN << firstOccurence << D << "\n";
		target = 4;
		firstOccurence = easyfind(lst1, target);
		std::cout << "Target is : " << CY <<  target << D << ". 1st occurence found at index : " << GREEN << firstOccurence << D << "\n";
		target = 7;
		firstOccurence = easyfind(lst1, target);
		std::cout << "Target is : " << CY <<  target << D << ". 1st occurence found at index : " << GREEN << firstOccurence << D << "\n";
	}
	catch(const std::exception& e)
	{
		std::cout << "Target is : " << CY <<  target << D << ". ";
		std::cerr << e.what() << '\n';
	}
	
	
	return 0;
}