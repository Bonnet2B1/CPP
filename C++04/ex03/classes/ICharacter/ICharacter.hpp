/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:07:38 by edelarbr          #+#    #+#             */
/*   Updated: 2023/11/28 18:09:51 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>

class AMateria;

class ICharacter {

public:
	ICharacter();
	ICharacter(const ICharacter &src);
	virtual ~ICharacter();
	ICharacter &operator = (const ICharacter &rhs);

	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;

};

#endif // ICHARACTER_HPP
