#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Form {

public:
	Form(const std::string name, const int signGrade, const int execGrade);
	Form(const Form &src);
	virtual ~Form();
	Form &operator = (const Form &rhs);

	const std::string	getName() const;
	bool				getStatus() const;
	const int			getSignGrade() const;
	const int			getExecGrade() const;

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
	bool				_signed;
	const int			_signGrade;
	const int			_execGrade;
};

std::ostream &operator << (std::ostream &out, const Form &rhs);

#endif // FORM_HPP
