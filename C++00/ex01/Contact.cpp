/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:13:07 by edelarbr          #+#    #+#             */
/*   Updated: 2023/11/18 17:14:28 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::set_first_name(std::string s) {
	_first_name = s;
}

void Contact::set_last_name(std::string s) {
	_last_name = s;
}

void Contact::set_nickname(std::string s) {
	_nickname = s;
}

void Contact::set_phone_number(std::string s) {
	_phone_number = s;
}

void Contact::set_darkest_secret(std::string s) {
	_darkest_secret = s;
}

std::string Contact::get_first_name(void) const {
	return (_first_name);
}

std::string Contact::get_last_name(void) const {
	return (_last_name);
}

std::string Contact::get_nickname(void) const {
	return (_nickname);
}

std::string Contact::get_phone_number(void) const {
	return (_phone_number);
}

std::string Contact::get_darkest_secret(void) const {
	return (_darkest_secret);
}

