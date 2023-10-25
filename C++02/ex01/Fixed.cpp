/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:14:55 by edelarbr          #+#    #+#             */
/*   Updated: 2023/10/25 20:37:14 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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

Fixed::Fixed( const int fixedPointValue )
{
	std::cout << "Int constructor called\n";
	// - code
}

Fixed::Fixed( const float toConvert )
{
	std::cout << "Float constructor called\n";
	// - code
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called\n";
}

Fixed& Fixed::operator = ( const Fixed& fixed )
{
	std::cout << "Copy assignment operator called\n";
	this->_fixedPointValue = fixed.getRawBits();
	return (*this);
}

std::ostream &operator << ( std::ostream &a, const Fixed &fixed )
{
	a << fixed.getRawBits();
	return (a);
}

int Fixed::getRawBits( void ) const
{
	return (this->_fixedPointValue);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called\n";
	this->_fixedPointValue = raw;
}

float Fixed::toFloat( void ) const
{
	// - code
}

int Fixed::toInt( void ) const
{
	// - code
}
