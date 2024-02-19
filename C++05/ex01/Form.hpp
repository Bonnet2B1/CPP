/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:28:47 by edelarbr          #+#    #+#             */
/*   Updated: 2024/02/19 17:28:48 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Bureaucrat;

class Form {

public:
	Form();
	Form(const std::string name, const int signGrade, const int execGrade);
	Form(const Form &src);
	virtual ~Form();
	Form &operator = (const Form &rhs);

	const std::string	getName() const;
	bool				getSignStatus() const;
	int					getSignGrade() const;
	int					getExecGrade() const;
	void				setSignStatus(bool status);

	void				beSigned(Bureaucrat &b);

	class GradeTooLowException : public std::exception {

		public:
			GradeTooLowException(const char* error);

			virtual const char* what() const throw() {
				return (this->_error);
			}
		private:
			const char*	_error;
	};

	class GradeTooHighException : public std::exception {

		public:
			GradeTooHighException(const char* error);

			virtual const char* what() const throw() {
				return (this->_error);
			}
		private:
			const char*	_error;
	};

private:
	const std::string	_name;
	bool				_signStatus;
	const int			_signGrade;
	const int			_execGrade;
};

std::ostream &operator << (std::ostream &out, const Form &rhs);

#endif // FORM_HPP
