#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>

class Ice {

public:
	Ice();
	Ice(const Ice &src);
	virtual ~Ice();
	Ice &operator = (const Ice &rhs);

private:

};

#endif // ICE_HPP
