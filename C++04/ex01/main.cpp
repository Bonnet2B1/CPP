/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:43:08 by edelarbr          #+#    #+#             */
/*   Updated: 2023/11/18 22:07:56 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "classes/Animal/Animal.hpp"
#include "classes/Cat/Cat.hpp"
#include "classes/Dog/Dog.hpp"

int main() {
	Animal *animals[2];

	for (int i = 0; i < 2; i++) {
		if (i % 2 == 0)
			animals[i] = new Dog;
		else
			animals[i] = new Cat;
	}

	std::cout << std::endl;

	for (int i = 0; i < 2; i++) {
		delete animals[i];
	}

	std::cout << std::endl << std::endl;

	Cat *cat = new Cat;
	Cat catcpy(*cat);

	std::cout << std::endl;

	delete cat;
}
