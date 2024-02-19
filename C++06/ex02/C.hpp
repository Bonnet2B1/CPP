#ifndef C_HPP
# define C_HPP

# include <iostream>
# include "Base.hpp"

class C : public Base {

public:
	C();
	virtual ~C();
	void	identify() const;

private:

};

#endif // C_HPP
