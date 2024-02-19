/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:29:24 by edelarbr          #+#    #+#             */
/*   Updated: 2024/02/19 17:29:25 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "../Bureaucrat/Bureaucrat.hpp"

AForm::AForm() : _signGrade(150), _execGrade(150) {
	this->_signStatus = 0;
}

AForm::AForm(const std::string name, const int signGrade, const int execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade) {
	if (this->_signGrade > 150 || this->_execGrade > 150)
		throw GradeTooHighException("The can't be less than 150");
	if (signGrade < 1 || this->_execGrade < 1)
		throw GradeTooLowException("The grade can't be more than 1");
	this->_signStatus = 0;
}

AForm::AForm(const AForm &src) : _signGrade(150), _execGrade(150) {
	*this = src;
}

AForm::~AForm() {}

AForm &AForm::operator = (const AForm &rhs) {
	if (this != &rhs) {
		this->_signStatus = rhs._signStatus;
	}
	return (*this);
}


const std::string	AForm::getName() const { return (this->_name); }

bool	AForm::getSignStatus() const { return (this->_signStatus); }

int	AForm::getSignGrade() const { return (this->_signGrade); }

int	AForm::getExecGrade() const { return (this->_execGrade); }

void	AForm::setSignStatus(bool status) { this->_signStatus = status; }

void	AForm::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() > this->getExecGrade())
		throw GradeTooLowException("Bureaucrat's grade is too low to execute the form");
	else
		execute(executor);
}

void	AForm::beSigned(Bureaucrat &b) {
	if (b.getGrade() > this->_signGrade)
		throw GradeTooLowException("garde too low");
	else
		this->_signStatus = 1;
}



AForm::GradeTooHighException::GradeTooHighException(const char* error) : _error(error) {}

AForm::GradeTooLowException::GradeTooLowException(const char* error) : _error(error) {}


std::ostream &operator << (std::ostream &out, const AForm &rhs)
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
