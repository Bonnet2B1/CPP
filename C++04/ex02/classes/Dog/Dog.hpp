/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:31:23 by edelarbr          #+#    #+#             */
/*   Updated: 2023/10/31 16:27:15 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "../Animal/Animal.hpp"
# include <iostream>

class Dog : public AAnimal {

public:
	Dog();
	Dog(const Dog &src);
	virtual ~Dog();
	Dog &operator = (const Dog &rhs);

	virtual void makeSound() const;
private:

};

#endif // DOG_HPP
