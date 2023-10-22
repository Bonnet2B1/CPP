/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 00:42:18 by edelarbr          #+#    #+#             */
/*   Updated: 2023/10/22 21:19:49 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		return (std::cout << "Wrong nuber of arguments\n", 1);

	std::string level = (std::string)argv[1];


	int level_int = 0;
	if (level == "DEBUG")
		level_int = 1;
	else if (level == "INFO")
		level_int = 2;
	else if (level == "WARNING")
		level_int = 3;
	else if (level == "ERROR")
		level_int = 4;

	Harl harl;
	switch (level_int)
	{
		case 1:
			(harl.complain("DEBUG"));
		case 2:
			(harl.complain("INFO"));
		case 3:
			(harl.complain("WARNING"));
		case 4:
			(harl.complain("ERROR"));
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
	}

	return (0);
}
