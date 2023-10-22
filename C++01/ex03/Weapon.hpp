/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 20:56:28 by momox             #+#    #+#             */
/*   Updated: 2023/10/22 22:21:57 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
public:
	Weapon(std::string s) : _type(s) {};
	~Weapon(void){};
	void setType(std::string type) { _type = type; }
	std::string getType(void) const { return (this->_type); }

private:
	std::string _type;
};

#endif
