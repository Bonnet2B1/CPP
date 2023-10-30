/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:37:58 by edelarbr          #+#    #+#             */
/*   Updated: 2023/10/30 10:53:29 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name){
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap " << _name << " is born" << std::endl;
}

FragTrap::FragTrap(FragTrap const &obj){
	this->_name = obj._name;
	this->_hitPoints = obj._hitPoints;
	this->_energyPoint = obj._energyPoint;
	this->_attackDamage = obj._attackDamage;
	std::cout << "FragTrap " << _name << " was copied" << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap " << _name << " was destroyed" << std::endl;
}

void FragTrap::highFivesGuys(){
	std::cout << "FragTrap " << _name << " is asking for a high five" << std::endl;
}
