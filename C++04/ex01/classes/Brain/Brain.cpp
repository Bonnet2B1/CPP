/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:15:39 by edelarbr          #+#    #+#             */
/*   Updated: 2023/10/30 18:15:41 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {}

Brain::Brain(const Brain &src) {
	*this = src;
}

Brain::~Brain() {}

Brain &Brain::operator = (const Brain &rhs) {
	if (this != &rhs) {

	}
	return (*this);
}
