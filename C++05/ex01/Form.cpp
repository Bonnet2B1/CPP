#include "Form.hpp"

Form::Form(const std::string name, const int signGrade, const int execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade) {
	this->_signed = 0;
}

Form::Form(const Form &src) {
	*this = src;
}

Form::~Form() {}

Form &Form::operator = (const Form &rhs) {
	if (this != &rhs) {
		*this = Form(rhs._name, rhs._signGrade, rhs._execGrade);
		this->_signed = rhs._signed;
	}
	return (*this);
}

std::ostream &operator << (std::ostream &out, const Form &rhs)
{
	out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return (out);
}
