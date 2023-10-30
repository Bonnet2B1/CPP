#include "Cat.hpp"

Cat::Cat() {
	this->type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &src) {
	*this = src;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator = (const Cat &rhs) {
	if (this != &rhs) {
		this->type = rhs.type;
	}
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "Meow meow" << std::endl;
}
