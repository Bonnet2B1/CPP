#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main() {
	Base* b;

	b = generate();
	b->identify();
	delete b;
}
