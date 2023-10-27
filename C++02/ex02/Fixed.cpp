/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:14:55 by edelarbr          #+#    #+#             */
/*   Updated: 2023/10/26 23:02:37 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) {
	this->_fixedPointValue = 0;
}

Fixed::Fixed( const Fixed &fixed ) {
	*this = fixed;
}

Fixed::Fixed( const int value ) {
	this->_fixedPointValue = value << _fractionalBits;
}

Fixed::Fixed( const float value ) {
	this->_fixedPointValue = roundf(value * pow(2, _fractionalBits));
}

Fixed::~Fixed( void ) {}

int Fixed::getRawBits( void ) const {
	return (this->_fixedPointValue);
}

float Fixed::toFloat( void ) const {
	return (this->_fixedPointValue / pow(2, _fractionalBits));
}

int Fixed::toInt( void ) const {
	return (this->_fixedPointValue >> _fractionalBits);
}

Fixed &Fixed::operator = ( const Fixed& fixed ) {
	if (this != &fixed)
		this->_fixedPointValue = fixed.getRawBits();
	return (*this);
}

Fixed &Fixed::operator + ( const Fixed &fixed ) {
	// - code
	return (*this);
}

std::ostream &operator << ( std::ostream &a, const Fixed &fixed ) {
	a << fixed.toFloat();
	return (a);
}
