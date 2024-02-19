#include "Serializer.hpp"

Serializer::Serializer() {}

Serializer::Serializer(const Serializer &src) {
	*this = src;
}

Serializer::~Serializer() {}

Serializer &Serializer::operator = (const Serializer &rhs) {
	(void)rhs;
	return (*this);
}

uintptr_t Serializer::serialize(Data* ptr) {
	return ((uintptr_t)ptr);
}

Data* Serializer::deserialize(uintptr_t raw) {
	return ((Data*)raw);
}

