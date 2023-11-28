/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:31:23 by edelarbr          #+#    #+#             */
/*   Updated: 2023/11/28 15:23:33 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "../Animal/Animal.hpp"
# include "../Brain/Brain.hpp"

class Dog : public Animal {

public:
	Dog();
	Dog(const Dog &src);
	virtual ~Dog();
	Dog &operator = (const Dog &obj);

	virtual void makeSound() const;

private:
	Brain *_brain;

};

#endif // DOG_HPP
