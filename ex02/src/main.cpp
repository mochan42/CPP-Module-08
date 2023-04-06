/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 23:18:55 by moninechan        #+#    #+#             */
/*   Updated: 2023/04/05 22:47:57 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.tpp"

int main()
{
	std::cout << GREEN << "<<<<<<<<<<< TESTS FROM SUBJECT >>>>>>>>>>>" << D << "\n";
	{
		std::cout << YELL << "=========== MUTANT STACK <int> ===========" << D << "\n";
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << " is the top element of the stack "<< std::endl;
		mstack.pop();
		std::cout << mstack.size() << " element in the stack "<< std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << " - ";
			++it;
		}
		std::cout << "\n";
		std::stack<int> s(mstack);
	}
	{
		std::cout << YELL << "=============== LIST <int> ===============" << D << "\n";
		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << mstack.back() << " is the top element of the stack "<< std::endl;
		mstack.pop_back();
		std::cout << mstack.size() << " element in the stack " << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << " - ";
			++it;
		}
	}
	std::cout << PU << "\n\n<<<<<<<<<<<<<<<< MY TESTS >>>>>>>>>>>>>>>>" << D << "\n";
	{
		std::cout << YELL << "========== MUTANT STACK <float> ==========" << D << "\n";
		MutantStack<float> mstack;
		mstack.push(5.1f);
		mstack.push(17.2f);
		std::cout << mstack.top() << "f" << " is the top element of the stack "<< std::endl;
		mstack.pop();
		std::cout << mstack.size() << " element in the stack " << std::endl;
		mstack.push(3.3f);
		mstack.push(5.4f);
		mstack.push(737.5f);
		mstack.push(0.6f);
		MutantStack<float>::iterator it = mstack.begin();
		MutantStack<float>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << "f" << " - ";
			++it;
		}
		std::cout << "\n";
		std::stack<float> s(mstack);
	}
	{
		std::cout << YELL << "============== LIST <float> ==============" << D << "\n";
		std::list<float> mstack;
		mstack.push_back(5.1f);
		mstack.push_back(17.2f);
		std::cout << mstack.back() << "f" << " is the top element of the stack "<< std::endl;
		mstack.pop_back();
		std::cout << mstack.size() << " element in the stack" << std::endl;
		mstack.push_back(3.3f);
		mstack.push_back(5.4f);
		mstack.push_back(737.5f);
		mstack.push_back(0.6f);
		std::list<float>::iterator it = mstack.begin();
		std::list<float>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << "f" << " - ";
			++it;
		}
	}
	return (0);
}