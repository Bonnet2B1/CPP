/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 18:59:04 by edelarbr          #+#    #+#             */
/*   Updated: 2023/10/20 19:07:02 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"

void HumanB::attack(void)
{
	std::cout << this->_name;
	std::cout << "attacks with their";
	std::cout << this->_weapon.getType();
	std::cout << std::endl;
}
