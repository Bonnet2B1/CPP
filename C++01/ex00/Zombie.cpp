/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:19:30 by edelarbr          #+#    #+#             */
/*   Updated: 2023/11/18 17:35:36 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie() {
	std::cout << this->_name << " has been destroyed" << std::endl;
}

void Zombie::setName(std::string name) {
	this->_name = name;
}

void Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void randomChump(std::string name)
{
	Zombie *zombie;

	zombie = newZombie(name);
	zombie->announce();
	delete zombie;
}

Zombie *newZombie(std::string name)
{
	Zombie *zombie;

	zombie = new Zombie;
	zombie->setName(name);
	return (zombie);
}

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *horde = new Zombie[N];

	for (int i = 0; i < N; i++)
		horde[i].setName(name);

	return (horde);
}
