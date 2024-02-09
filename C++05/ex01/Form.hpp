#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Form {

public:
	Form();
	Form(const std::string name, const int signGrade, const int execGrade);
	Form(const Form &src);
	virtual ~Form();
	Form &operator = (const Form &rhs);

	const std::string	getName() const;
	bool				getSignStatus() const;
	const int			getSignGrade() const;
	const int			getExecGrade() const;

	class GradeTooLowException : public std::exception {

		public:
			GradeTooLowException(const std::string error);

			virtual const char* what() const throw() {
				return (this->_error.c_str());
			}
		private:
			const std::string	_error;
	};

	class GradeTooHighException : public std::exception {

		public:
			GradeTooHighException(const std::string error);

			virtual const char* what() const throw() {
				return (this->_error.c_str());
			}
		private:
			const std::string	_error;
	};

private:
	const std::string	_name;
	bool				_signStatus;
	const int			_signGrade;
	const int			_execGrade;
};

std::ostream &operator << (std::ostream &out, const Form &rhs);

#endif // FORM_HPP
