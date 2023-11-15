/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:31:50 by edelarbr          #+#    #+#             */
/*   Updated: 2023/10/31 16:27:15 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal() {
	std::cout << "Animal default constructor called" << std::endl;
	this->_brain = new Brain();
}

AAnimal::AAnimal(const AAnimal &src) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}

AAnimal::~AAnimal() {
	std::cout << "Animal destructor called" << std::endl;
	delete this->_brain;
}

AAnimal &AAnimal::operator = (const AAnimal &rhs) {
	std::cout << "Animal assignation operator called" << std::endl;
	if (this != &rhs) {
		this->_type = rhs._type;
		*this->_brain = Brain(*rhs._brain);
	}
	return (*this);
}

std::string AAnimal::getType() const {
	return (this->_type);
}

void AAnimal::makeSound() const {
	std::cout << "Animal sound" << std::endl;
}
