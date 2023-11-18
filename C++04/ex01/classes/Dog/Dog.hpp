/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:31:23 by edelarbr          #+#    #+#             */
/*   Updated: 2023/11/18 22:07:31 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "../Animal/Animal.hpp"
# include <iostream>

class Dog : public Animal {

public:
	Dog();
	Dog(const Dog &src);
	virtual ~Dog();
	Dog &operator = (const Dog &rhs);

	virtual void makeSound() const;

private:
	Brain *_brain;
};

#endif // DOG_HPP
