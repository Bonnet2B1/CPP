/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nothingFoundException.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 20:25:18 by edelarbr          #+#    #+#             */
/*   Updated: 2024/03/07 22:32:32 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "nothingFoundException.hpp"

nothingFoundException::nothingFoundException() : _message("Nothing found") {}
nothingFoundException::nothingFoundException(const char* message) : _message(message) {}
nothingFoundException::nothingFoundException(const nothingFoundException &src) : _message(src._message) {}
nothingFoundException::~nothingFoundException() throw() {}
nothingFoundException &nothingFoundException::operator=(const nothingFoundException &src) {
	if (this != &src)
		this->_message = src._message;
	return *this;
}
