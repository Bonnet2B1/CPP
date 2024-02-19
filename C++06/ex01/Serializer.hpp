#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>

struct Data;

class Serializer {

public:
	virtual ~Serializer();
	Serializer &operator = (const Serializer &rhs);

	static uintptr_t	serialize(Data* ptr);
	static Data*		deserialize(uintptr_t raw);
private:
	Serializer();
	Serializer(const Serializer &src);

};

#endif // SERIALIZER_HPP
