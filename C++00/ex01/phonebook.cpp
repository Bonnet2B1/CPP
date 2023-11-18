/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 23:26:04 by edelarbr          #+#    #+#             */
/*   Updated: 2023/11/18 16:54:36 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

std::string	format(std::string original)
{
	std::string formated;
	int	spaces = 0;

	if (original.length() < 10)
	{
		spaces = 10 - original.length();
		while (spaces--)
			formated += ' ';
		formated += original;
		return (formated);
	}
	if (original.length() > 10)
	{
		for (int i = 0; i < 9; i++)
			formated += original[i];
		formated += '.';
		return (formated);
	}
	return (original);
}

void	PhoneBook::preview(void)
{

	std::cout << " |FIRST NAME|LAST NAME |NICKNAME  |NUMBER    |SECRET    |" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << i + 1 << "|";
		std::cout << std::right << std::setw(10) << format(page[i].get_first_name()) << "|";
		std::cout << std::right << std::setw(10) << format(page[i].get_last_name()) << "|";
		std::cout << std::right << std::setw(10) << format(page[i].get_nickname()) << "|";
		std::cout << std::right << std::setw(10) << format(page[i].get_phone_number()) << "|";
		std::cout << std::right << std::setw(10) << format(page[i].get_darkest_secret()) << "|" << std::endl;
	}
	std::cout << std::endl;
}

void	PhoneBook::display_contact(Contact page)
{
	std::cout << "FIRST NAME    : " << page.get_first_name() << std::endl;
	std::cout << "LAST NAME     : " << page.get_last_name() << std::endl;
	std::cout << "NICKNAME      : " << page.get_nickname() << std::endl;
	std::cout << "PHONE NUMBER  : " << page.get_phone_number() << std::endl;
	std::cout << "DARKEST SECRET: " << page.get_darkest_secret() << std::endl;
	std::cout << std::endl;
}

void	PhoneBook::set_to_null(void)
{
	for (int i = 0; i < 8; i++)
	{
		page[i].set_first_name(NULL);
		page[i].set_last_name(NULL);
		page[i].set_nickname(NULL);
		page[i].set_phone_number(NULL);
		page[i].set_darkest_secret(NULL);
	}
}
