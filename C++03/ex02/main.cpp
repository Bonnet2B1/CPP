/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 18:53:00 by edelarbr          #+#    #+#             */
/*   Updated: 2023/10/30 10:50:21 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main ()
{
	ScavTrap robot("R2D2");
	FragTrap robot2("BB8");

	robot.attack("C3PO");
	robot.guardGate();

	robot2.highFivesGuys();
	return 0;
}
