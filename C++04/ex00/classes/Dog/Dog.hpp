#ifndef DOG_HPP
# define DOG_HPP

# include "../Animal/Animal.hpp"

class Dog : public Animal {

public:
	Dog();
	Dog(const Dog &src);
	virtual ~Dog();
	Dog &operator = (const Dog &obj);

	virtual void makeSound() const;

};

#endif // DOG_HPP
