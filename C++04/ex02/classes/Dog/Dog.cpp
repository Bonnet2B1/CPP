/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:31:20 by edelarbr          #+#    #+#             */
/*   Updated: 2023/11/28 15:23:33 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	this->_type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &src) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator = (const Dog &obj) {
	std::cout << "Dog assignation operator called" << std::endl;
	if (this != &obj) {
		this->_type = obj._type;
		*this->_brain = Brain(*obj._brain);
	}
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "Woof woof" << std::endl;
}
