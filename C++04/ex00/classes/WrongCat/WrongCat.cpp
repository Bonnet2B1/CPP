#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "WrongCat constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &src) {
	*this = src;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &WrongCat::operator = (const WrongCat &obj) {
	if (this != &obj) {
		this->type = obj.type;
	}
	return (*this);
}

void WrongCat::makeSound() const {
	std::cout << "WrongCat: Meow Meow" << std::endl;
}
