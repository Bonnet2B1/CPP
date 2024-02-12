#include "Intern.hpp"
#include "../AForm/AForm.hpp"
#include "../ShrubberyCreationForm/ShrubberyCreationForm.hpp"
#include "../RobotomyRequestForm/RobotomyRequestForm.hpp"
#include "../PresidentialPardonForm/PresidentialPardonForm.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &src) {
	*this = src;
}

Intern::~Intern() {}

Intern &Intern::operator = (const Intern &rhs) {
	(void)rhs;
	return (*this);
}

AForm	*Intern::makeForm(std::string formName, std::string target) {
	std::string formNameList[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	AForm* formList[3] = { new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target) };
	AForm* ret = nullptr;
	for (int i = 0; i < 3; i++) {
	if (formNameList[i] == formName)
			ret = formList[i];
		else
			delete formList[i];
	}
	if (ret)
		std::cout << "Intern creates " << formName << std::endl;
	else
		std::cout << "The form name \"" << formName << "\" don't match with any existing form" << std::endl;
	return (ret);
}
