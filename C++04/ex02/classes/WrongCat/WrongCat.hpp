/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <edelarbr@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:31:34 by edelarbr          #+#    #+#             */
/*   Updated: 2023/10/30 18:31:36 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "../WrongAnimal/WrongAnimal.hpp"
# include <iostream>

class WrongCat : public WrongAnimal {

public:
	WrongCat();
	WrongCat(const WrongCat &src);
	virtual ~WrongCat();
	WrongCat &operator = (const WrongCat &rhs);

	virtual void makeSound() const;

private:

};

#endif // WRONGCAT_HPP
