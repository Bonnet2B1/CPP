/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:05:12 by edelarbr          #+#    #+#             */
/*   Updated: 2023/11/30 02:29:59 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Character/Character.hpp"
#include "Cure.hpp"

Cure::Cure() {
	this->_type = "cure";
}

Cure::Cure(const Cure &src) {
	*this = src;
}

Cure::~Cure() {}

Cure &Cure::operator = (const Cure &rhs) {
	if (this != &rhs) {
		this->_type = rhs._type;
	}
	return *this;
}

Cure *Cure::clone() const {
	return (new Cure(*this));
}
