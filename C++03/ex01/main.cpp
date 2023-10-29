/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 18:53:00 by edelarbr          #+#    #+#             */
/*   Updated: 2023/10/30 00:40:42 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main ()
{
	ScavTrap robot("R2D2");
	ClapTrap robot2("C3PO");

	robot.attack("C3PO");
	robot2.takeDamage(20);
	robot2.beRepaired(10);
	robot.guardGate();
	return 0;
}
