/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:31:50 by edelarbr          #+#    #+#             */
/*   Updated: 2023/11/28 15:23:33 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &src) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator = (const Animal &obj) {
	std::cout << "Animal assignation operator called" << std::endl;
	if (this != &obj) {
		this->_type = obj._type;
	}
	return (*this);
}

std::string Animal::getType() const {
	return (this->_type);
}

void Animal::makeSound() const {
	std::cout << "Animal sound" << std::endl;
}
