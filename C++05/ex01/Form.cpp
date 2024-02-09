#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _signGrade(150), _execGrade(150) {
	this->_signStatus = 0;
}

Form::Form(const std::string name, const int signGrade, const int execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade) {
	if (this->_signGrade > 150 || this->_execGrade > 150)
		throw GradeTooHighException("The can't be less than 150");
	if (signGrade < 1 || this->_execGrade < 1)
		throw GradeTooLowException("The grade can't be more than 1");
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

int	Form::getSignGrade() const { return (this->_signGrade); }

int	Form::getExecGrade() const { return (this->_execGrade); }

void	Form::setSignStatus(bool status) { this->_signStatus = status; }


void	Form::beSigned(Bureaucrat &b) {
	if (b.getGrade() > this->_signGrade)
		throw GradeTooLowException("garde too low");
	else
		this->_signStatus = 1;
}


Form::GradeTooHighException::GradeTooHighException(const char* error) : _error(error) {}

Form::GradeTooLowException::GradeTooLowException(const char* error) : _error(error) {}


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
