/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 12:31:31 by edelarbr          #+#    #+#             */
/*   Updated: 2024/03/14 17:10:58 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.tpp"
#include <list>

int main()
{
	std::cout << "Expected result created by std::list:\n";

	std::list<int> lst;
	lst.push_back(5);
	lst.push_back(17);

	std::cout << lst.back() << std::endl;


	lst.pop_back();

	std::cout << lst.size() << std::endl;

	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	//[...]
	lst.push_back(0);

	std::list<int>::iterator lstIt = lst.begin();
	std::list<int>::iterator lstIte = lst.end();

	++lstIt;
	--lstIt;
	while (lstIt != lstIte)
	{
		std::cout << *lstIt << std::endl;
		++lstIt;
	}


	std::cout << "\nActual result with MutantStack:\n";

	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "\nOther tests:\n";
	MutantStack<int> mstack2;

	// Test push and top
	mstack2.push(5);
	if (mstack2.top() != 5)
		std::cout << "Test push/top failed." << std::endl;

	// Test pop
	mstack2.pop();
	if (!mstack2.empty())
		std::cout << "Test pop failed." << std::endl;

	// Test iterator
	mstack2.push(10);
	mstack2.push(20);
	MutantStack<int>::iterator it2 = mstack2.begin();
	MutantStack<int>::iterator it3 = mstack2.end();
	it3--;
	if (*it2 != 10 || *it3 != 20)
		std::cout << "Test iterator failed." << std::endl;

	std::cout << "All tests passed." << std::endl;

	return (0);
}
