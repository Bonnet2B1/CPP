/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:12:50 by edelarbr          #+#    #+#             */
/*   Updated: 2024/02/08 16:17:20 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
	this->_grade = 150;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name) {
	if (grade > 150)
		throw GradeTooLowException("The can't be less than 150");
	else if (grade < 1)
		throw GradeTooHighException("The grade can't be more than 1");
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) {
	*this = src;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator = (const Bureaucrat &rhs) {
	if (this != &rhs) {
		*this = Bureaucrat(rhs._name, rhs._grade);
	}
	return (*this);
}

const std::string	Bureaucrat::getName() const {return _name;}

int	Bureaucrat::getGrade() const {return _grade;}

void	Bureaucrat::DecreaseGrade() {
	if (this->_grade + 1 > 150)
		throw GradeTooLowException("The can't be less than 150");
	else
		this->_grade++;
}

void	Bureaucrat::IncreaseGrade() {
	if (this->_grade - 1 < 1)
		throw GradeTooHighException("The grade can't be more than 1");
	else
		this->_grade--;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(const char* error) : _error(error) {}

Bureaucrat::GradeTooLowException::GradeTooLowException(const char* error) : _error(error) {}

std::ostream &operator << (std::ostream &out, const Bureaucrat &rhs)
{
	out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return (out);
}
