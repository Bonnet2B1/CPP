/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 21:33:21 by edelarbr          #+#    #+#             */
/*   Updated: 2023/10/22 22:22:01 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
public:
	HumanB(std::string name) : _name(name) {}
	~HumanB(void) {};
	void setWeapon(Weapon &weapon){_weapon = &weapon;}
	std::string getName(void) { return (this->_name); }
	void attack(void) { std::cout << getName() << " attacks with their " << _weapon->getType() << std::endl; }

private:
	std::string _name;
	Weapon *_weapon;
};

#endif
