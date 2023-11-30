/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:10:42 by edelarbr          #+#    #+#             */
/*   Updated: 2023/11/29 20:53:04 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "../ICharacter/ICharacter.hpp"

class Character : public ICharacter{

public:
	Character(std::string name);
	Character(const Character &src);
	~Character();
	Character &operator = (const Character &rhs);

	std::string const &getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);

private:
	std::string _name;
	AMateria *_inventorySlot[4];

};

#endif // CHARACTER_HPP
