/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:31:53 by edelarbr          #+#    #+#             */
/*   Updated: 2023/11/28 15:23:33 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "../Brain/Brain.hpp"
# include <iostream>

class AAnimal {

public:
	AAnimal();
	AAnimal(const AAnimal &src);
	virtual ~AAnimal();
	AAnimal &operator = (const AAnimal &obj);

	std::string getType() const;

	virtual void makeSound() const = 0;

protected:
	std::string _type;
	Brain *_brain;

private:

};

#endif // ANIMAL_HPP
