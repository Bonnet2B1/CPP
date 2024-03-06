/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:50:37 by edelarbr          #+#    #+#             */
/*   Updated: 2024/03/06 20:14:52 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "easyfind.hpp"

int main()
{
	int tab[] = {3, 2, 3, 6};
	std::vector<int> vec(tab, tab + sizeof(tab) / sizeof(tab[0]));
	try
	{
		std::cout << easyfind(vec, 8) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
