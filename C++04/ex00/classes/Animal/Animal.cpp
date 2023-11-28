#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &src) {
	*this = src;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator = (const Animal &obj) {
	if (this != &obj) {
		this->type = obj.type;
	}
	return (*this);
}

std::string Animal::getType() const {
	return (this->type);
}

void Animal::makeSound() const {
	std::cout << "Animal sound" << std::endl;
}
