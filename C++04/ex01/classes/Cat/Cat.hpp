/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:31:17 by edelarbr          #+#    #+#             */
/*   Updated: 2023/11/18 22:07:24 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "../Animal/Animal.hpp"
# include <iostream>

class Cat : public Animal {
public:
	Cat();
	Cat(const Cat &src);
	virtual ~Cat();
	Cat &operator = (const Cat &rhs);

	virtual void makeSound() const;

private:
	Brain *_brain;
};

#endif // CAT_HPP
