#ifndef A_HPP
# define A_HPP

# include <iostream>
# include "Base.hpp"

class A : public Base {

public:
	A();
	virtual ~A();
	void	identify() const;

private:

};

#endif // A_HPP
