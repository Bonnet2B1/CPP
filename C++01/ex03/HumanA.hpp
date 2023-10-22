/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 21:32:20 by edelarbr          #+#    #+#             */
/*   Updated: 2023/10/22 22:21:53 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
public:
	HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(&weapon) {}
	~HumanA(void){};
	std::string getName(void) { return (this->_name); }
	void attack(void) { std::cout << getName() << " attacks with their " << _weapon->getType() << std::endl; }

private:
	std::string _name;
	Weapon *_weapon;
};

#endif
