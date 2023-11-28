#include "Dog.hpp"

Dog::Dog() {
	this->type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &src) {
	*this = src;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator = (const Dog &obj) {
	if (this != &obj) {
		this->type = obj.type;
	}
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "Woof woof" << std::endl;
}
