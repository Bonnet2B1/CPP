/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 23:28:59 by edelarbr          #+#    #+#             */
/*   Updated: 2023/10/19 21:03:48 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>

#define FIRST_MENU_MESSAGE "Enter:\n- \"ADD\":    to add a contact\n- \"SEARCH\": to display your phone book\n- \"EXIT\":   to close your phone book and loose everything\n"

class Contact
{
public:
	void set_first_name(std::string s) { _first_name = s; }
	void set_last_name(std::string s) { _last_name = s; }
	void set_nickname(std::string s) { _nickname = s; }
	void set_phone_number(std::string s) { _phone_number = s; }
	void set_darkest_secret(std::string s) { _darkest_secret = s; }
	std::string get_first_name(void) const { return (_first_name); }
	std::string get_last_name(void) const { return (_last_name); }
	std::string get_nickname(void) const { return (_nickname); }
	std::string get_phone_number(void) const { return (_phone_number); }
	std::string get_darkest_secret(void) const { return (_darkest_secret); }

private:
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;
};

class PhoneBook
{
public:
	Contact page[8];
	void preview(void);
	void set_to_null(void);
	void display_contact(Contact page);

private:
};

#endif
