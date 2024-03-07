/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:50:37 by edelarbr          #+#    #+#             */
/*   Updated: 2024/03/07 22:34:29 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include "easyFind.hpp"

int main()
{
	std::vector<int>	vec;
	for (int i = 0; i <= 42; i++)
		vec.push_back(i);

	try
	{
		std::cout << easyFind(vec, 42) << " was found in vec" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}


	std::list<int>		list;
	for (int i = 0; i <= 42; i++)
		list.push_back(i);
	try
	{
		std::cout << easyFind(list, -1) << " was found in list" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
