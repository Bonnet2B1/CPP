/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 00:32:58 by edelarbr          #+#    #+#             */
/*   Updated: 2023/10/22 21:18:14 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
	std::cout << DEBUG_MSG;
}

void Harl::info( void )
{
	std::cout << INFO_MSG;
}

void Harl::warning( void )
{
	std::cout << WARNING_MSG;
}

void Harl::error( void )
{
	std::cout << ERROR_MSG;
}

void Harl::complain( std::string level )
{
	typedef void (Harl::*ptr)(void);

	std::string complainLevel[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	ptr functions[4] = { &Harl::debug,&Harl::info, &Harl::warning, &Harl::error };
	for (int i = 0; i < 4; i++) {
		if (complainLevel[i] == level) {
			std::cout << "[ " << level << " ]\n";
			(this->*functions[i])();
			std::cout << '\n';
		}
	}
}
