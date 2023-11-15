/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 19:13:43 by edelarbr          #+#    #+#             */
/*   Updated: 2023/11/01 16:43:40 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* ------------Constructors/Destructor------------ */

ClapTrap::ClapTrap( void ) {}

ClapTrap::ClapTrap( const std::string name) {
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoint = 10;
	this->_attackDamage = 0;
	std::cout << "<" << this->_name << "> " << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\n";
}

ClapTrap::ClapTrap( const ClapTrap &obj ) {
	*this = obj;
	std::cout << "<" << this->_name << "> " << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA (but copy)\n";
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "<" << this->_name << "> " << "Joining ancestors\n";
}

ClapTrap &ClapTrap::operator = ( const ClapTrap &obj ) {
	this->_name = obj._name;
	this->_hitPoints = obj._hitPoints;
	this->_energyPoint = obj._energyPoint;
	this->_attackDamage = obj._attackDamage;
	return (*this);
}

/* ---------------------Getters--------------------- */

std::string ClapTrap::getName( void ) const {
	return (this->_name);
}

/* ----------------Member Functions---------------- */

void ClapTrap::attack( const std::string &target ) {
	if (this->_energyPoint == 0) {
		std::cout << "<" << this->_name << "> " << "I can't attack, I have no energy\n";
		return;
	}
	this->_energyPoint--;
	std::cout << "<" << this->_name << "> attacks " << target << ", causing " << this->_attackDamage << " point(s) of damage!\n";
}

void ClapTrap::takeDamage( unsigned int amount ) {
	if (this->_hitPoints == 0) {
		std::cout << "<" << this->_name << "> " << "I can't take damage(s), I'm already dead\n";
		return;
	}
	if (this->_hitPoints > amount) {
		this->_hitPoints -= amount;
		std::cout << "<" << this->_name << "> " << "Outch, I take " << amount << " damage(s)\n";
		return;
	}
	else {
		this->_hitPoints = 0;
		std::cout << "<" << this->_name << "> " << "Fuck, I'm dying\n";
		return;
	}
}

void ClapTrap::beRepaired( unsigned int amount ) {
	if (this->_hitPoints == 0) {
		std::cout << "<" << this->_name << "> " << "I can't repare myself, I'm dead\n";
		return;
	}
	else if (this->_energyPoint == 0) {
		std::cout << "<" << this->_name << "> " << "I can't repare myself, I have no energy\n";
		return;
	}
	else {
		this->_energyPoint--;
		this->_hitPoints += amount;
		std::cout << "<" << this->_name << "> " << "Sheeeeeeesh... That feel good, now I got " << amount << " hit(s) point(s)\n";
	}
}
