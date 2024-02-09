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

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main() {

	Bureaucrat b("Charles", 50);
	std::cout << b << std::endl;

	Form f1("promotion", 30, 30);
	std::cout << f1 << std::endl;

	b.signForm(f1);

	Form f2("resignation", 70, 70);
	std::cout << f2 << std::endl;

	b.signForm(f2);
}
