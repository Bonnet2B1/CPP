/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:48:35 by edelarbr          #+#    #+#             */
/*   Updated: 2023/11/28 16:48:44 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(const AMateria &src) {
	*this = src;
}

AMateria::~AMateria() {}

AMateria &AMateria::operator = (const AMateria &rhs) {
	if (this != &rhs) {
		// - Copy all attributes here
	}
	return (*this);
}
