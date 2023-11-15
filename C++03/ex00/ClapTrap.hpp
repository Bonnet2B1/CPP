/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 18:54:27 by edelarbr          #+#    #+#             */
/*   Updated: 2023/11/01 16:42:59 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
public:
	ClapTrap( void );
	ClapTrap( const ClapTrap &obj );
	ClapTrap( const std::string name );
	~ClapTrap( void );

	ClapTrap &operator = ( const ClapTrap &obj );

	std::string getName( void ) const;

	void attack( const std::string &target );
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );

private:
	std::string _name;
	unsigned int _hitPoints;
	unsigned int _energyPoint;
	unsigned int _attackDamage;
};

#endif
