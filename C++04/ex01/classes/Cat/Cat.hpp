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

};

#endif // CAT_HPP
