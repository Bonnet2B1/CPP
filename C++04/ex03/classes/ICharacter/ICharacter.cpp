/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:07:34 by edelarbr          #+#    #+#             */
/*   Updated: 2023/11/28 17:07:36 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter() {}

ICharacter::ICharacter(const ICharacter &src) {
	*this = src;
}

ICharacter::~ICharacter() {}

ICharacter &ICharacter::operator = (const ICharacter &rhs) {
	if (this != &rhs) {
		// - Copy all attributes here
	}
	return (*this);
}
