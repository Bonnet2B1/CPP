#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(const std::string name) : _name(name) {}

Bureaucrat::Bureaucrat(const Bureaucrat &src) {
	*this = src;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator = (const Bureaucrat &rhs) {
	if (this != &rhs) {
		// - Copy all attributes here
	}
	return (*this);
}
