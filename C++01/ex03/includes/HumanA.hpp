/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:48:58 by edelarbr          #+#    #+#             */
/*   Updated: 2023/10/20 19:45:13 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
public:
	HumanA(std::string name, Weapon &type) : _name(name), _weapon(type) {}
	~HumanA() {}
	void attack();

private:
	std::string _name;
	Weapon _weapon;
};

#endif
