#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Bureaucrat;

class AForm {

public:
	AForm();
	AForm(const std::string name, const int signGrade, const int execGrade);
	AForm(const AForm &src);
	virtual ~AForm();
	AForm &operator = (const AForm &rhs);

	const std::string	getName() const;
	bool				getSignStatus() const;
	int					getSignGrade() const;
	int					getExecGrade() const;
	void				setSignStatus(bool status);

	void				beSigned(Bureaucrat &b);
	virtual void		execute(Bureaucrat const & executor) const = 0;

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

protected:
	std::string			_target;

private:
	const std::string	_name;
	bool				_signStatus;
	const int			_signGrade;
	const int			_execGrade;
};

std::ostream &operator << (std::ostream &out, const AForm &rhs);

#endif // FORM_HPP
