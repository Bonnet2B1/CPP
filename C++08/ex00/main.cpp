/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:50:37 by edelarbr          #+#    #+#             */
/*   Updated: 2024/03/06 17:04:04 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "easyfind.hpp"

int main()
{
	int tab[] = {3, 2, 3};
	for (int i = 0; i < 3; i++)
	std::vector<int> vec(tab, tab + sizeof(tab) / sizeof(tab[0]));
	std::cout << easyfind(vec, 2) << std::endl;
}
