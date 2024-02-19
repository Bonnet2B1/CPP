#ifndef B_HPP
# define B_HPP

# include <iostream>
# include "Base.hpp"

class B : public Base {

public:
	B();
	virtual ~B();
	void	identify() const;

private:

};

#endif // B_HPP
