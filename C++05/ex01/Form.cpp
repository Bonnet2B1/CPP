#include "Form.hpp"

Form::Form() : _signGrade(150), _execGrade(150) {
	this->_signStatus = 0;
}

Form::Form(const std::string name, const int signGrade, const int execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade) {
	this->_signStatus = 0;
}

Form::Form(const Form &src) : _signGrade(150), _execGrade(150) {
	*this = src;
}

Form::~Form() {}

Form &Form::operator = (const Form &rhs) {
	if (this != &rhs) {
		*this = Form(rhs._name, rhs._signGrade, rhs._execGrade);
		this->_signStatus = rhs._signStatus;
	}
	return (*this);
}

const std::string	Form::getName() const { return (this->_name); }

bool	Form::getSignStatus() const { return (this->_signStatus); }

const int	Form::getSignGrade() const { return (this->_signGrade); }

const int	Form::getExecGrade() const { return (this->_execGrade); }

Form::GradeTooHighException::GradeTooHighException(const std::string error) : _error(error) {}

Form::GradeTooLowException::GradeTooLowException(const std::string error) : _error(error) {}

std::ostream &operator << (std::ostream &out, const Form &rhs)
{
	std::string status;

	if (rhs.getSignStatus() == 0)
		status = "unsigned";
	else
		status = "signed";
	out << "Form name : \"" << rhs.getName()
		<< "\" Form status : \"" << status
		<< "\" required to sign it : \"" << rhs.getSignGrade()
		<< "\" grade required to execute it : " << rhs.getExecGrade();
	return (out);
}
