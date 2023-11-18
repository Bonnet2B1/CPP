/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:56:43 by edelarbr          #+#    #+#             */
/*   Updated: 2023/11/18 17:57:23 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {}

HumanB::~HumanB(void){}

void HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}

std::string HumanB::getName(void) {
	return (this->_name);
}

void HumanB::attack(void) {
	std::cout << getName() << " attacks with their " << _weapon->getType() << std::endl;
}
