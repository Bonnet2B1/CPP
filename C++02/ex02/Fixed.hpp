/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:14:46 by edelarbr          #+#    #+#             */
/*   Updated: 2023/10/26 22:07:04 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int _fixedPointValue;
	static const int _fractionalBits = 8;

public:
	Fixed( void );
	Fixed( const Fixed &fixed );
	Fixed( const int value );
	Fixed( const float value );
	~Fixed( void );

	int getRawBits( void ) const;

	float toFloat( void ) const;
	int toInt( void ) const;

	Fixed &operator = ( const Fixed &fixed );
	Fixed &operator + ( const Fixed &fixed );
	Fixed &operator - ( const Fixed &fixed );
	Fixed &operator * ( const Fixed &fixed );
	Fixed &operator / ( const Fixed &fixed );
};

std::ostream &operator << ( std::ostream &a, const Fixed &fixed );

#endif
