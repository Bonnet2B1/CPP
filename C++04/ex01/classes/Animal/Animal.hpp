/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:31:53 by edelarbr          #+#    #+#             */
/*   Updated: 2023/11/28 15:51:03 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {

public:
	Animal();
	Animal(const Animal &src);
	virtual ~Animal();
	Animal &operator = (const Animal &obj);

	std::string getType() const;

	virtual void makeSound() const;

protected:
	std::string _type;

};

#endif // ANIMAL_HPP
