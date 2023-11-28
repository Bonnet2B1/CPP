/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:10:39 by edelarbr          #+#    #+#             */
/*   Updated: 2023/11/28 18:12:49 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {}

Character::Character(const Character &src) {
	*this = src;
}

Character::~Character() {}

Character &Character::operator = (const Character &rhs) {
	if (this != &rhs) {
		// - Copy all attributes here
	}
	return (*this);
}
