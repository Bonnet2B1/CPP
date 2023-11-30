/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:42:21 by edelarbr          #+#    #+#             */
/*   Updated: 2023/11/30 02:55:50 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classes/Character/Character.hpp"
#include "classes/MateriaSource/MateriaSource.hpp"

int main() {
	// Create a MateriaSource and learn Ice and Cure Materias
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	// Create a Character named "me"
	ICharacter* me = new Character("me");

	// Equip "me" with Ice and Cure Materias
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	// Create a Character named "bob"
	ICharacter* bob = new Character("bob");

	// "me" uses Ice and Cure Materias on "bob"
	me->use(0, *bob);
	me->use(1, *bob);

	// Clean up
	delete bob;
	delete me;
	delete src;

	return 0;
}









// int main() {
// 	// Create a MateriaSource and learn Ice and Cure Materias
// 	MateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());

// 	// Create a Character named "me"
// 	Character* me = new Character("me");

// 	// Equip "me" with Ice and Cure Materias
// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);

// 	// Create a Character named "bob"
// 	Character* bob = new Character("bob");

// 	// "me" uses Ice and Cure Materias on "bob"
// 	me->use(0, *bob);
// 	me->use(1, *bob);

// 	// Test copy constructor
// 	Character* copyMe = new Character(*me);
// 	copyMe->use(0, *bob); // Should use Ice on bob
// 	copyMe->use(1, *bob); // Should use Cure on bob

// 	// Test assignment operator
// 	Character assignBob = *bob;
// 	assignBob = *me;
// 	assignBob.use(0, *bob); // Should use Ice on bob
// 	assignBob.use(1, *bob); // Should use Cure on bob

// 	// Clean up
// 	delete bob;
// 	delete me;
// 	delete copyMe;
// 	delete src;

// 	// Create a MateriaSource and learn Ice and Cure Materias
// 	src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());

// 	// Test createMateria with valid and invalid types
// 	tmp = src->createMateria("ice");
// 	if (tmp == 0 || tmp->getType() != "ice")
// 		std::cout << "createMateria failed for type 'ice'" << std::endl;
// 	tmp = src->createMateria("fire");
// 	if (tmp != 0)
// 		std::cout << "createMateria did not return null for invalid type 'fire'" << std::endl;

// 	// Test learnMateria with null
// 	src->learnMateria(0); // Should not do anything

// 	// Test copy constructor
// 	MateriaSource* copySrc = new MateriaSource(*src);
// 	tmp = copySrc->createMateria("ice");
// 	if (tmp == 0 || tmp->getType() != "ice")
// 		std::cout << "copy constructor failed for type 'ice'" << std::endl;

// 	// Test assignment operator
// 	MateriaSource assignSrc;
// 	assignSrc = *src;
// 	tmp = assignSrc.createMateria("ice");
// 	if (tmp == 0 || tmp->getType() != "ice")
// 		std::cout << "assignment operator failed for type 'ice'" << std::endl;

// 	// Clean up
// 	delete src;
// 	delete copySrc;

// 	return 0;
// }
