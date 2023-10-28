/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 18:53:00 by edelarbr          #+#    #+#             */
/*   Updated: 2023/10/28 21:49:57 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main ( void )
{
	ClapTrap john("John");
	ClapTrap loan("Loan");

	john.attack(loan.getName());
	john.takeDamage(5);
	john.beRepaired(1);
	john.takeDamage(6);
	john.takeDamage(1);
	for (int i = 0; i < 11; i++)
		loan.beRepaired(0);
	ClapTrap loanCopy(loan);
	loan.attack(john.getName());
}
