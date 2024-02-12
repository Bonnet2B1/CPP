/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:29:26 by edelarbr          #+#    #+#             */
/*   Updated: 2024/02/08 16:12:14 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classes/Bureaucrat/Bureaucrat.hpp"
#include "classes/AForm/AForm.hpp"
#include "classes/RobotomyRequestForm/RobotomyRequestForm.hpp"
#include "classes/PresidentialPardonForm/PresidentialPardonForm.hpp"
#include "classes/ShrubberyCreationForm/ShrubberyCreationForm.hpp"

int main(void)
{
	Bureaucrat b0("ultra nullos", 50);
	Bureaucrat b1("nullos", 50);
	Bureaucrat b2("boss", 1);
	AForm *robotomy = new RobotomyRequestForm("Random pig");
	AForm *presidential = new PresidentialPardonForm("Moi");
	AForm *shruberry = new ShrubberyCreationForm("Hein");

	b0.signForm(*robotomy);
	b0.executeForm(*robotomy);
	std::cout << std::endl;

	b1.signForm(*robotomy);
	b1.executeForm(*robotomy);
	std::cout << std::endl;

	b2.signForm(*robotomy);
	b2.executeForm(*robotomy);
	std::cout << std::endl;

	b2.signForm(*presidential);
	b2.executeForm(*presidential);
	std::cout << std::endl;

	b2.signForm(*shruberry);
	b2.executeForm(*shruberry);
	std::cout << std::endl;

	delete robotomy;
	delete presidential;
	delete shruberry;

	return (0);
}
