#include "Serializer.hpp"
#include "Data.h"

int main() {
	Data*		ptr = new Data;
	uintptr_t	serialized = 0;

	ptr->proof = "Hehehehe";

	std::cout << "ptr->proof: " << ptr->proof << std::endl;
	serialized = Serializer::serialize(ptr);
	std::cout << "serialization" << std::endl;

	std::cout << "ptr: " << ptr << std::endl;
	ptr = nullptr;
	std::cout << "ptr: " << ptr << std::endl;

	ptr = Serializer::deserialize(serialized);
	std::cout << "deserialization" << std::endl;
	std::cout << "ptr->proof: " << ptr->proof << std::endl;


	return 0;
}
