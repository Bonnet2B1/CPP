#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>


class Base {

public:
	virtual ~Base();
	virtual void identify() const = 0;

};

Base*	generate(void);
#endif // BASE_HPP
