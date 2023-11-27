/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:14:46 by edelarbr          #+#    #+#             */
/*   Updated: 2023/11/27 13:59:53 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

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

	Fixed &operator = ( const Fixed &fixed );

	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream &operator << ( std::ostream &a, const Fixed &fixed );

#endif
