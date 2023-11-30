/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:48:35 by edelarbr          #+#    #+#             */
/*   Updated: 2023/11/29 20:41:11 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "../Character/Character.hpp"

AMateria::AMateria() {}

AMateria::AMateria(const AMateria &src) {
	*this = src;
}

AMateria::AMateria(std::string const &type) : _type(type) {}

AMateria::~AMateria() {}

AMateria &AMateria::operator = (const AMateria &rhs) {
	if (this != &rhs) {
		this->_type = rhs._type;
	}
	return (*this);
}

std::string const &AMateria::getType() const {
	return (this->_type);
}

void AMateria::use(ICharacter& target) {
	if (this->getType() == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (this->getType() == "cure")
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
