/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:51:33 by edelarbr          #+#    #+#             */
/*   Updated: 2023/10/21 17:47:21 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
public:
	HumanB(std::string name) : _name(name) {}
	~HumanB() {}
	void attack();
	std::string getWeaponType() const { return(this->_weapon->getType()); }
	void setWeapon(Weapon &weapon) { this->_weapon = &weapon; }
private:
	std::string _name;
	Weapon *_weapon;
};

#endif
