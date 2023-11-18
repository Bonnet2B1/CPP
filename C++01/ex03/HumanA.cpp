/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:54:42 by edelarbr          #+#    #+#             */
/*   Updated: 2023/11/18 17:56:16 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(&weapon) {}

HumanA::~HumanA(void){}

std::string HumanA::getName(void) {
	return (this->_name);
}

void HumanA::attack(void) {
	std::cout << getName() << " attacks with their " << _weapon->getType() << std::endl;
}
