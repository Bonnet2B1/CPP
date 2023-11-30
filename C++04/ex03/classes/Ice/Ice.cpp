/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:05:04 by edelarbr          #+#    #+#             */
/*   Updated: 2023/11/30 02:29:42 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Character/Character.hpp"
#include "../AMateria/AMateria.hpp"
#include "Ice.hpp"

Ice::Ice() {
	this->_type = "ice";
}

Ice::Ice(const Ice &src) {
	*this = src;
}

Ice::~Ice() {}

Ice &Ice::operator=(const Ice &rhs) {
	if (this != &rhs) {
		this->_type = rhs._type;
	}
	return *this;
}

Ice *Ice::clone() const {
	return (new Ice(*this));
}
