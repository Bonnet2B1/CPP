/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 17:06:12 by edelarbr          #+#    #+#             */
/*   Updated: 2023/11/28 18:04:12 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class ICharacter;

class AMateria {

public:
	AMateria();
	AMateria(const AMateria &src);
	AMateria(std::string const & type);
	virtual ~AMateria();
	AMateria &operator = (const AMateria &rhs);

	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	// virtual void use(ICharacter& target);

protected:
	std::string _type;

};

#endif // AMATERIA_HPP
