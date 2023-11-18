/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:58:03 by edelarbr          #+#    #+#             */
/*   Updated: 2023/11/18 17:58:24 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string s) : _type(s) {};

Weapon::~Weapon(void){};

void Weapon::setType(std::string type) {
	_type = type;
}

std::string Weapon::getType(void) const {
	return (this->_type);
}
