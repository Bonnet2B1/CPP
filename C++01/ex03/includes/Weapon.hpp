/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:19:21 by edelarbr          #+#    #+#             */
/*   Updated: 2023/10/20 21:09:17 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
public:
	Weapon(std::string type) : _type(type) {}
	~Weapon() {}
	std::string getType() const { return (_type); }
	void setType(std::string type) { this->_type = type; }

private:
	std::string _type;
};

#endif
