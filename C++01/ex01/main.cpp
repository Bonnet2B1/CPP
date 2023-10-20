/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 00:08:34 by edelarbr          #+#    #+#             */
/*   Updated: 2023/10/20 00:19:44 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *horde;
	int hordeSize = 5;
	std::string zombieName = "Jaques";

	horde = zombieHorde(hordeSize, zombieName);
	for (int i = 0; i < hordeSize; i++)
		horde[i].announce();

	delete horde;
}
