/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 23:28:59 by edelarbr          #+#    #+#             */
/*   Updated: 2023/11/18 17:07:28 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include "Contact.hpp"

# define FIRST_MENU_MESSAGE "Enter:\n- \"ADD\":    to add a contact\n- \"SEARCH\": to display your phone book\n- \"EXIT\":   to close your phone book and loose everything\n"

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
