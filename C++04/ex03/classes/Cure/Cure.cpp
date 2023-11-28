/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:05:12 by edelarbr          #+#    #+#             */
/*   Updated: 2023/11/28 17:05:14 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() {}

Cure::Cure(const Cure &src) {
	*this = src;
}

Cure::~Cure() {}

Cure &Cure::operator = (const Cure &rhs) {
	if (this != &rhs) {
		// - Copy all attributes here
	}
	return (*this);
}
