/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:10:39 by edelarbr          #+#    #+#             */
/*   Updated: 2023/11/30 02:52:55 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "../AMateria/AMateria.hpp"

Character::Character(std::string name) : _name(name) {
	for (int idx = 0; idx < 4; idx++)
		this->_inventorySlot[idx] = 0;
}

Character::Character(const Character &src) {
	for (int idx = 0; idx < 4; idx++)
		this->_inventorySlot[idx] = 0;
	*this = src;
}

Character::~Character() {
	for (int idx = 0; idx < 4; idx++) {
		if (this->_inventorySlot[idx] != 0) {
			delete this->_inventorySlot[idx];
		}
	}
}

Character &Character::operator = (const Character &rhs) {
	if (this != &rhs) {
		this->_name = rhs._name;
		for (int idx = 0; idx < 4; idx++) {
			if (this->_inventorySlot[idx] != 0) {
				delete this->_inventorySlot[idx];
			}
			if (rhs._inventorySlot[idx] != 0)
				this->_inventorySlot[idx] = rhs._inventorySlot[idx]->clone();
		}
	}
	return (*this);
}

std::string const &Character::getName() const {
	return (this->_name);
}

void Character::equip(AMateria *m) {
	int idx;
	for (idx = 0; idx < 4; idx++) {
		if (!this->_inventorySlot[idx]) {
			this->_inventorySlot[idx] = m;
			// std::cout << "Materia " << this->_inventorySlot[idx]->getType() << " slot " << idx << " equiped" << std::endl;
			return ;
		}
	}
	// std::cout << "Can't equip more than 4 materia" << std::endl;
}

void Character::unequip(int idx) {
	if (this->_inventorySlot[idx]) {
		// std::cout << "Materia " << this->_inventorySlot[idx]->getType() << " slot " << idx << " unequiped" << std::endl;
		_inventorySlot[idx] = 0;
	}
	else {
		// std::cout << "This inventory slot is empty" << std::endl;
	}
}

void Character::use(int idx, ICharacter &target) {
	if (idx < 4 && this->_inventorySlot[idx]) {
		this->_inventorySlot[idx]->use(target);
		delete this->_inventorySlot[idx];
		this->_inventorySlot[idx] = 0;
	}
}
