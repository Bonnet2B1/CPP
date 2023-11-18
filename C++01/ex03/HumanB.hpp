/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 21:33:21 by edelarbr          #+#    #+#             */
/*   Updated: 2023/11/18 17:57:44 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
public:
	HumanB(std::string name);
	~HumanB(void);
	void setWeapon(Weapon &weapon);
	std::string getName(void);
	void attack(void);

private:
	std::string _name;
	Weapon *_weapon;
};

#endif
