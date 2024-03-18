/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 20:19:06 by edelarbr          #+#    #+#             */
/*   Updated: 2024/03/18 19:54:36 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool	isNumber(std::string str)
{
	std::string::iterator ite = str.end();
	for (std::string::iterator it = str.begin(); it != ite; it++)
	{
		if (!isdigit(*it))
			return (0);
	}
	return (1);
}

void	checkNumbers(char **argv)
{
	int i = 0;
	while (argv[++i])
		if (!isNumber(argv[i]))
			throw ErrorMsg("Error in the inputs !");
}

void	printBefore(char **argv)
{
	std::cout << "====Before: ====\n\n";
	for (int i = 1; argv[i]; i++)
		std::cout << argv[i] << " ";
	std::cout << std::endl;
}

void	printVec(std::vector<unsigned int> Vec)
{
	for (std::vector<unsigned int>::iterator it = Vec.begin(); it != Vec.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}
