/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moninechan <moninechan@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 19:41:02 by mochan            #+#    #+#             */
/*   Updated: 2023/04/04 00:10:14 by moninechan       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.tpp"

int main()
{
	std::vector<int>	v1(5, 42);
	std::list<int>		lst1;
	

	lst1.push_back(2);
	lst1.push_back(1);
	lst1.push_back(3);
	lst1.push_back(1);
	lst1.push_back(4);
	printElements(lst1);
	unsigned long firstOccurence;
	std::cout << "\n";
	firstOccurence = easyfind(lst1, 1);
	std::cout << "firstOccurence index (start at 0 for first place): " << firstOccurence << "\n";
	return 0;
}