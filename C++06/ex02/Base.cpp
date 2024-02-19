#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base() {}

Base* generate(void) {
	std::srand(std::time(0));
	int rdm = std::rand() % 3;
	if (rdm == 0)
		return new A();
	else if (rdm == 1)
		return new B();
	else
		return new C();
}

