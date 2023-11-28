/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:05:04 by edelarbr          #+#    #+#             */
/*   Updated: 2023/11/28 17:05:06 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() {}

Ice::Ice(const Ice &src) {
	*this = src;
}

Ice::~Ice() {}

Ice &Ice::operator = (const Ice &rhs) {
	if (this != &rhs) {
		// - Copy all attributes here
	}
	return (*this);
}
