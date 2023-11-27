/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:14:55 by edelarbr          #+#    #+#             */
/*   Updated: 2023/11/27 14:07:57 by edelarbr         ###   ########.fr       */
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

Fixed::Fixed( void )
{
	std::cout << "Default constructor called\n";
	this->_fixedPointValue = 0;
}

Fixed::Fixed( const Fixed &fixed )
{
	std::cout << "Copy constructor called\n";
	*this = fixed;
}

Fixed::Fixed( const int value )
{
	std::cout << "Int constructor called\n";
	this->_fixedPointValue = value << _fractionalBits;
}

Fixed::Fixed( const float value )
{
	std::cout << "Float constructor called\n";
	this->_fixedPointValue = roundf(value * myPow(2, _fractionalBits));
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called\n";
}

Fixed& Fixed::operator=( const Fixed& fixed )
{
	std::cout << "Copy assignment operator called\n";
	if (this != &fixed)
		this->_fixedPointValue = fixed.getRawBits();
	return (*this);
}

int Fixed::getRawBits( void ) const
{
	return (this->_fixedPointValue);
}

float Fixed::toFloat( void ) const
{
	return (this->_fixedPointValue / myPow(2, _fractionalBits));
}

int Fixed::toInt( void ) const
{
	return (this->_fixedPointValue >> _fractionalBits);
}

std::ostream &operator << ( std::ostream &a, const Fixed &fixed )
{
	a << fixed.toFloat();
	return (a);
}
