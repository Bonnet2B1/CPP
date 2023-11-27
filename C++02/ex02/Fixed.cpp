/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:14:55 by edelarbr          #+#    #+#             */
/*   Updated: 2023/11/27 14:14:30 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

double myPow(double base, int exponent) {
	double result = 1.0;
	for(int i = 0; i < exponent; i++) {
		result *= base;
	}
	return result;
}

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
	this->_fixedPointValue = roundf(value * myPow(2, _fractionalBits));
}

Fixed::~Fixed( void ) {}

int Fixed::getRawBits( void ) const {
	return (this->_fixedPointValue);
}

float Fixed::toFloat( void ) const {
	return (this->_fixedPointValue / myPow(2, _fractionalBits));
}

int Fixed::toInt( void ) const {
	return (this->_fixedPointValue >> _fractionalBits);
}

bool Fixed::operator == ( const Fixed fixed ) const {
	if (this->getRawBits() == fixed.getRawBits())
		return (true);
	else
	 	return (false);
}

bool Fixed::operator != ( const Fixed fixed ) const {
	if (this->getRawBits() != fixed.getRawBits())
		return (true);
	else
	 	return (false);
}

bool Fixed::operator >= ( const Fixed fixed ) const {
	if (this->getRawBits() >= fixed.getRawBits())
		return (true);
	else
	 	return (false);
}

bool Fixed::operator <= ( const Fixed fixed ) const {
	if (this->getRawBits() <= fixed.getRawBits())
		return (true);
	else
	 	return (false);
}

bool Fixed::operator > ( const Fixed fixed ) const {
	if (this->getRawBits() > fixed.getRawBits())
		return (true);
	else
	 	return (false);
}

bool Fixed::operator < ( const Fixed fixed ) const {
	if (this->getRawBits() < fixed.getRawBits())
		return (true);
	else
	 	return (false);
}

Fixed &Fixed::operator = ( const Fixed &fixed ) {
	if (this != &fixed)
		this->_fixedPointValue = fixed.getRawBits();
	return (*this);
}

Fixed Fixed::operator + ( const Fixed fixed ) const {
	Fixed result(this->toFloat() + fixed.toFloat());
	return (result);
}

Fixed Fixed::operator - ( const Fixed fixed ) const {
	Fixed result(this->toFloat() - fixed.toFloat());
	return (result);
}

Fixed Fixed::operator * ( const Fixed fixed ) const {
	Fixed result(this->toFloat() * fixed.toFloat());
	return (result);
}

Fixed Fixed::operator / ( const Fixed fixed ) const {
	Fixed result(this->toFloat() / fixed.toFloat());
	return (result);
}

std::ostream &operator << ( std::ostream &a, const Fixed &fixed ) {
	a << fixed.toFloat();
	return (a);
}

Fixed Fixed::operator ++ (int) {
	Fixed temp(*this);
	this->_fixedPointValue++;
	return (temp);
}

Fixed &Fixed::operator ++ () {
	this->_fixedPointValue++;
	return (*this);
}

Fixed Fixed::operator -- (int) {
	Fixed temp(*this);
	this->_fixedPointValue--;
	return (temp);
}

Fixed &Fixed::operator -- () {
	this->_fixedPointValue--;
	return (*this);
}

Fixed Fixed::min(Fixed &a, Fixed &b) {
	if (a <= b)
		return (a);
	else
		return (b);
}

Fixed Fixed::min(const Fixed &a, const Fixed &b) {
	if (a <= b)
		return (a);
	else
		return (b);
}

Fixed Fixed::max(Fixed &a, Fixed &b) {
	if (a >= b)
		return (a);
	else
		return (b);
}

Fixed Fixed::max(const Fixed &a, const Fixed &b) {
	if (a >= b)
		return (a);
	else
		return (b);
}
