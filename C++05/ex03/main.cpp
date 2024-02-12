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
#include "classes/Intern/Intern.hpp"
#include "classes/AForm/AForm.hpp"

int main(void)
{
	Bureaucrat b("Boss", 1);

	Intern someRandomIntern;
	AForm* rrf;
	std::cout << std::endl;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");

	std::cout << std::endl;
	b.signForm(*rrf);
	std::cout << std::endl;
	b.executeForm(*rrf);

	delete rrf;

	std::cout << std::endl;
	rrf = someRandomIntern.makeForm("invalid form name", "Bender");

	return (0);
}
