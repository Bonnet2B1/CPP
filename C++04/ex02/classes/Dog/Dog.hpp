/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:31:23 by edelarbr          #+#    #+#             */
/*   Updated: 2023/11/28 15:58:14 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "../AAnimal/AAnimal.hpp"
# include <iostream>

class Dog : public AAnimal {

public:
	Dog();
	Dog(const Dog &src);
	virtual ~Dog();
	Dog &operator = (const Dog &obj);

	virtual void makeSound() const;
private:

};

#endif // DOG_HPP
