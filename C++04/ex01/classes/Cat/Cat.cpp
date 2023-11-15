/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:31:11 by edelarbr          #+#    #+#             */
/*   Updated: 2023/10/31 16:05:47 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(const Cat &src) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator = (const Cat &rhs) {
	std::cout << "Cat assignation operator called" << std::endl;
	if (this != &rhs) {
		this->_type = rhs._type;
		*this->_brain = Brain(*rhs._brain);
	}
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "Meow meow" << std::endl;
}
