/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 20:19:15 by edelarbr          #+#    #+#             */
/*   Updated: 2024/03/19 19:51:32 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

size_t	binarySearchVector(std::vector<unsigned int> res, unsigned int nb)
{
	if (res[res.size() - 1] < nb)
		return (res.size());
	if (res[0] > nb)
		return (0);
	size_t	first = 0;
	size_t	last = res.size();
	size_t	mid = (first + (last - first) / 2);
	while (first != mid && mid != last)
	{
		if (nb == res[mid])
			return (mid);
		if (nb < res[mid])
			last = mid;
		else if (nb > res[mid])
			first = mid;
		mid = (first + (last - first) / 2);
	}
	return (mid + 1);
}

size_t	binarySearchDeque(std::deque<unsigned int> res, unsigned int nb)
{
	if (res[res.size() - 1] < nb)
		return (res.size());
	if (res[0] > nb)
		return (0);
	size_t	first = 0;
	size_t	last = res.size();
	size_t	mid = (first + (last - first) / 2);
	while (first != mid && mid != last)
	{
		if (nb == res[mid])
			return (mid);
		if (nb < res[mid])
			last = mid;
		else if (nb > res[mid])
			first = mid;
		mid = (first + (last - first) / 2);
	}
	return (mid + 1);
}

void	mergeSortVector(std::vector<unsigned int> &Vec)
{
	if (Vec.size() <= 1)
		return ;

	for (size_t u = 0; u + 1 < Vec.size(); u += 2)
	{
		if (Vec[u] > Vec[u + 1])
			std::swap(Vec[u], Vec[u + 1]);
	}
	std::vector<unsigned int> res;
	for (size_t i = 1; i + 1 <= Vec.size(); i += 2)
		res.push_back(Vec[i]);
	mergeSortVector(res);
	for (size_t i = 0; i < Vec.size(); i += 2)
		res.insert(res.begin() + binarySearchVector(res, Vec[i]), Vec[i]);
	Vec = res;
}

void	mergeSortDeque(std::deque<unsigned int> &deque)
{
	if (deque.size() <= 1)
		return ;

	for (size_t u = 0; u + 1 < deque.size(); u += 2)
	{
		if (deque[u] > deque[u + 1])
			std::swap(deque[u], deque[u + 1]);
	}
	std::deque<unsigned int> res;
	for (size_t i = 1; i + 1 <= deque.size(); i += 2)
		res.push_back(deque[i]);
	mergeSortDeque(res);
	for (size_t i = 0; i < deque.size(); i += 2)
		res.insert(res.begin() + binarySearchDeque(res, deque[i]), deque[i]);
	deque = res;
}

void	sortContainer(char **argv, int argc)
{
	std::vector<unsigned int>	Vec;
	std::deque<unsigned int>	Deque;
	int							i = 0;

	while (argv[++i])
	{
		Vec.push_back(atoi(argv[i]));
		Deque.push_back(atoi(argv[i]));
	}
	clock_t start = clock();
	mergeSortVector(Vec);
	clock_t end = clock();
	std::cout << "\n==== After: ====\n\n";
	printVec(Vec);
	std::cout << "\n\nTime to process a range of " << (argc - 1) << " elements with std::vector: ";
	std::cout << std::fixed << static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000000 << " us"<< std::endl;
	start = clock();
	mergeSortDeque(Deque);
	end = clock();
	std::cout << "Time to process a range of " << (argc - 1) << " elements with std::deque:  ";
	std::cout << std::fixed << static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000000 << " us" << std::endl;
}

int main(int argc, char **argv)
{
	if (argc <= 1)
	{
		std::cout << "Try with args !" << std::endl;
		return (1);
	}
	try
	{
		checkNumbers(argv);
		printBefore(argv);
		sortContainer(argv, argc);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
