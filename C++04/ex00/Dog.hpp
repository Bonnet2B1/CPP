#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include <iostream>

class Dog : public Animal {

public:
	Dog();
	Dog(const Dog &src);
	virtual ~Dog();
	Dog &operator = (const Dog &rhs);

	virtual void makeSound() const;
private:

};

#endif // DOG_HPP
