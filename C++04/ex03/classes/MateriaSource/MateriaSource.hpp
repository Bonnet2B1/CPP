/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 21:10:53 by edelarbr          #+#    #+#             */
/*   Updated: 2023/11/30 00:59:22 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "../IMateriaSource/IMateriaSource.hpp"
# include "../AMateria/AMateria.hpp"
# include "../Ice/Ice.hpp"
# include "../Cure/Cure.hpp"

class MateriaSource : public IMateriaSource {

public:
	MateriaSource();
	MateriaSource(const MateriaSource &src);
	virtual ~MateriaSource();
	MateriaSource &operator = (const MateriaSource &rhs);

	void learnMateria(AMateria *m);
	AMateria* createMateria(std::string const & type);

private:
	AMateria *_memory[4];
};

#endif // MATERIASOURCE_HPP
