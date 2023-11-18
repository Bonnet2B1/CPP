/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:19:33 by edelarbr          #+#    #+#             */
/*   Updated: 2023/11/18 17:29:08 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
private:
	std::string _name;
public:
	Zombie();
	~Zombie();
	void setName(std::string name);
	void announce(void);
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);
Zombie *zombieHorde(int N, std::string name);

#endif // ZOMBIE_HPP
