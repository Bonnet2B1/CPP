#include "RobotomyRequestForm.hpp"
#include "../Bureaucrat/Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45) {
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) {
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator = (const RobotomyRequestForm &rhs) {
	if (this != &rhs) {
		this->_target = rhs._target;
	}
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() > this->getExecGrade())
		throw AForm::GradeTooLowException("Bureaucrat's grade is too low to execute the form");
	std::srand(std::time(0));
	if (std::rand() % 2)
		std::cout << "** Drilling noises **" << std::endl << this->_target << " has been robotomized successfully" << std::endl;
	else
		std::cout << "** Drilling noises **" << std::endl << this->_target << " robotomization failed" << std::endl;
}
