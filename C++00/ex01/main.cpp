/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:52:10 by edelarbr          #+#    #+#             */
/*   Updated: 2023/11/23 20:12:32 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"


int main(void)
{
	PhoneBook	book;
	std::string	input;
	int			i = 0;

	while (1)
	{
		std::cout << FIRST_MENU_MESSAGE;
		std::getline(std::cin, input);
		std::cout << std::endl;
		if (std::cin.eof() || input == "EXIT")
			break;
		if (input == "ADD")
		{
			std::cout << "First Name: ";
			std::getline(std::cin, input);
			book.page[i].set_first_name(input);

			std::cout << "Last Name: ";
			std::getline(std::cin, input);
			book.page[i].set_last_name(input);

			std::cout << "Nick Name: ";
			std::getline(std::cin, input);
			book.page[i].set_nickname(input);

			std::cout << "Phone Number: ";
			std::getline(std::cin, input);
			book.page[i].set_phone_number(input);

			std::cout << "Darkest secret: ";
			std::getline(std::cin, input);
			book.page[i].set_darkest_secret(input);

			std::cout << std::endl;
			if (++i == 8)
				i = 0;
		}
		if (input == "SEARCH")
		{
			book.preview();
			std::cout << "Contact index you want the details for: ";
			std::getline(std::cin, input);
			if (input == "1" || input == "2" || input == "3" || input == "4" || input == "5" || input == "6" || input == "7" || input == "8")
				book.display_contact(book.page[input[0] - '1']);
			else
				std::cout << "ERROR: INVALID INDEX" << std::endl << std::endl;
		}
	}
}
