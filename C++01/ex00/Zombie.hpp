/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:07:44 by edelarbr          #+#    #+#             */
/*   Updated: 2023/10/20 19:23:14 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>

class Zombie
{
private:
	std::string _name;
public:
	Zombie(){}
	~Zombie(){ std::cout << this->_name << "has been destroyed" << std::endl}
	void set_name(std::string name){this->_name = name;}
	void announce(void);
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif