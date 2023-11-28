/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:31:17 by edelarbr          #+#    #+#             */
/*   Updated: 2023/11/28 15:58:10 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "../AAnimal/AAnimal.hpp"
# include <iostream>

class Cat : public AAnimal {
public:
	Cat();
	Cat(const Cat &src);
	virtual ~Cat();
	Cat &operator = (const Cat &obj);

	virtual void makeSound() const;
private:

};

#endif // CAT_HPP
