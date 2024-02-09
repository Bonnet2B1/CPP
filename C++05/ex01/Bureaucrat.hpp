/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:12:45 by edelarbr          #+#    #+#             */
/*   Updated: 2024/02/08 16:12:46 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat {

public:
	Bureaucrat(const std::string name);
	Bureaucrat(const Bureaucrat &src);
	virtual ~Bureaucrat();
	Bureaucrat &operator = (const Bureaucrat &rhs);

	const std::string	getName() const;
	int					getGrade() const;

	void				IncreaseGrade();
	void				DecreaseGrade();


	class GradeTooHighException : public std::exception {

	public:
		GradeTooHighException(const char* error);

		virtual const char* what() const throw() {
			return (this->_error);
		}

	private:
		const char*	_error;

	};

	class GradeTooLowException : public std::exception {

	public:
		GradeTooLowException(const char* error);

		virtual const char* what() const throw() {
			return (this->_error);
		}

	private:
		const char*	_error;

	};

private:
	const std::string	_name;
	int					_grade;

};

std::ostream &operator << (std::ostream &out, const Bureaucrat &rhs);

#endif // BUREAUCRAT_HPP
