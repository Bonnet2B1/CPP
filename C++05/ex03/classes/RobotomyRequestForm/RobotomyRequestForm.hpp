#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "../AForm/AForm.hpp"

class Bureaucrat;

class RobotomyRequestForm : public AForm {

public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &src);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm &operator = (const RobotomyRequestForm &rhs);

	void	execute(Bureaucrat const & executor) const;

private:

};

#endif // ROBOTOMYREQUESTFORM_HPP
