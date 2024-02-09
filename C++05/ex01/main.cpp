/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:29:26 by edelarbr          #+#    #+#             */
/*   Updated: 2024/02/08 16:12:14 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {

	Bureaucrat B1("Charles");

	try
	{
		B1.DecreaseGrade();
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << B1 << std::endl;

	for (int i = 0; i != 150; i++)
	{
		try
		{
			B1.IncreaseGrade();
		}
		catch (std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << B1 << std::endl;
}
