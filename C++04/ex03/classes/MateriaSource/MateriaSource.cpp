/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 21:10:45 by edelarbr          #+#    #+#             */
/*   Updated: 2023/11/30 18:55:43 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int idx = 0; idx < 4; idx++)
		this->_memory[idx] = 0;
}

MateriaSource::MateriaSource(const MateriaSource &src) {
	for (int idx = 0; idx < 4; idx++)
		this->_memory[idx] = 0;
	*this = src;
}

MateriaSource::~MateriaSource() {
	for (int idx = 0; idx < 4; idx++) {
		if (this->_memory[idx] != 0) {
			delete this->_memory[idx];
		}
	}
}

MateriaSource &MateriaSource::operator = (const MateriaSource &rhs) {
	if (this != &rhs) {
		for (int idx = 0; idx < 4; idx++) {
			if (this->_memory[idx] != 0) {
				delete this->_memory[idx];
			}
			if (rhs._memory[idx] != 0)
				this->_memory[idx] = rhs._memory[idx]->clone();
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m) {
	if (m == 0)
		return ;
	if (_memory[3] != 0) {
		delete _memory[3];
		_memory[3] = 0;
	}
	for (int idx = 3; idx > 0; idx--) {
		_memory[idx] = _memory[idx - 1];
		_memory[idx - 1] = 0;
	}
	_memory[0] = m->clone();
	delete m;
	// std::cout << "Materia " << m->getType() << " learned" << std::endl;
}

AMateria* MateriaSource::createMateria(const std::string &type) {
	for (int idx = 0; idx < 4; idx ++) {
		if (this->_memory[idx] != 0 && this->_memory[idx]->getType() == type) {
			// std::cout << "Materia " << type << " created" << std::endl;
			return (this->_memory[idx]->clone());
		}
	}
	// std::cout << "Materia " << type << " not found" << std::endl;
	return 0;
}
