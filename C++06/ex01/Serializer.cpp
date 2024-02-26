/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:27:24 by edelarbr          #+#    #+#             */
/*   Updated: 2024/02/26 20:32:25 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {}

Serializer::Serializer(const Serializer &src) {
	*this = src;
}

Serializer::~Serializer() {}

Serializer &Serializer::operator = (const Serializer &rhs) {
	(void)rhs;
	return (*this);
}

__intptr_t Serializer::serialize(Data* ptr) {
	return ((__intptr_t)ptr);
}

Data* Serializer::deserialize(__intptr_t raw) {
	return ((Data*)raw);
}

