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

Bureaucrat::Bureaucrat(const std::string name) : _name(name) {
	this->_grade = 150;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) {
	*this = src;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator = (const Bureaucrat &rhs) {
	if (this != &rhs) {
		*this = Bureaucrat(rhs.getName());
		this->_grade = rhs._grade;
	}
	return (*this);
}

const std::string	Bureaucrat::getName() const {return _name;}

int	Bureaucrat::getGrade() const {return _grade;}

void	Bureaucrat::DecreaseGrade() {
	if (this->_grade + 1 <= 150)
		this->_grade++;
	else
		throw GradeTooHighException("The grade is too low");
}

void	Bureaucrat::IncreaseGrade() {
	if (this->_grade - 1 >= 1)
		this->_grade--;
	else
		throw GradeTooLowException("The grade is too high");
}

Bureaucrat::GradeTooHighException::GradeTooHighException(const char* error) : _error(error) {}

Bureaucrat::GradeTooLowException::GradeTooLowException(const char* error) : _error(error) {}

std::ostream &operator << (std::ostream &out, const Bureaucrat &rhs)
{
	out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return (out);
}
