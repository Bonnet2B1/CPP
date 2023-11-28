#ifndef CAT_HPP
# define CAT_HPP

# include "../Animal/Animal.hpp"

class Cat : public Animal {
public:
	Cat();
	Cat(const Cat &src);
	virtual ~Cat();
	Cat &operator = (const Cat &obj);

	virtual void makeSound() const;

};

#endif // CAT_HPP
