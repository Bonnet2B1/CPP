#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat {

public:
	Bureaucrat();
	Bureaucrat(const std::string name);
	Bureaucrat(const Bureaucrat &src);
	virtual ~Bureaucrat();
	Bureaucrat &operator = (const Bureaucrat &rhs);

private:
	const std::string	_name;
	int					_grade;
};

#endif // BUREAUCRAT_HPP
