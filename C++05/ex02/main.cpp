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
	// Bureaucrat bureau_1("michel", 1500);
	// Bureaucrat bureau_1("michel", 0);
	Bureaucrat bureau_1("michel", 45);
	Bureaucrat bureau_2("Karen", 3);
	AForm *form_1 = new RobotomyRequestForm("Random pig");
	AForm *form_2 = new PresidentialPardonForm("Moi");
	AForm *form_3 = new ShrubberyCreationForm("Hein");

	std::cout << bureau_1 << std::endl;
	std::cout << bureau_2 << std::endl;

	form_1->beSigned(bureau_1);
	form_1->beSigned(bureau_1);
	bureau_1.signForm(*form_1);
	bureau_1.signForm(*form_1);
	bureau_1.executeForm(*form_1);

	form_2->beSigned(bureau_1);
	form_2->execute(bureau_1);
	bureau_2.signForm(*form_2);
	form_2->execute(bureau_2);

	bureau_2.signForm(*form_3);
	form_3->execute(bureau_2);

	delete form_1;
	delete form_2;
	delete form_3;

	return (0);
}
