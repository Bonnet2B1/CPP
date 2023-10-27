/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:14:55 by edelarbr          #+#    #+#             */
/*   Updated: 2023/10/27 20:06:05 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	this->_fixedPointValue = 0;
}

Fixed::Fixed( const Fixed &fixed )
{
	std::cout << "Copy constructor called\n";
	*this = fixed;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed &Fixed::operator = ( const Fixed& fixed )
{
	std::cout << "Copy assignment operator called\n";
	this->_fixedPointValue = fixed.getRawBits();
	return (*this);
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called\n";
	return (this->_fixedPointValue);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called\n";
	this->_fixedPointValue = raw;
}
