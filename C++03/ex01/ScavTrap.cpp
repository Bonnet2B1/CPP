/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 00:09:50 by edelarbr          #+#    #+#             */
/*   Updated: 2023/11/27 15:12:21 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name){
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap " << _name << " is born" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &obj){
	*this = obj;
	std::cout << "ScavTrap " << _name << " was copied" << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap " << _name << " is dead" << std::endl;
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap " << _name << " have enterred in Gate keeper mode" << std::endl;
}

ScavTrap &ScavTrap::operator = (ScavTrap const &obj){
	this->_name = obj._name;
	this->_hitPoints = obj._hitPoints;
	this->_energyPoint = obj._energyPoint;
	this->_attackDamage = obj._attackDamage;
	std::cout << "ScavTrap " << _name << " was assigned" << std::endl;
	return (*this);
}
