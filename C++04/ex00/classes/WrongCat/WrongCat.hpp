#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "../WrongAnimal/WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public:
	WrongCat();
	WrongCat(const WrongCat &src);
	virtual ~WrongCat();
	WrongCat &operator = (const WrongCat &obj);

	virtual void makeSound() const;

};

#endif // WRONGCAT_HPP
