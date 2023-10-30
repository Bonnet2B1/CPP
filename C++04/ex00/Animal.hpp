#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {

public:
	Animal();
	Animal(const Animal &src);
	virtual ~Animal();
	Animal &operator = (const Animal &rhs);

	std::string getType() const;

	virtual void makeSound() const;
protected:
	std::string type;

private:

};

#endif // ANIMAL_HPP
