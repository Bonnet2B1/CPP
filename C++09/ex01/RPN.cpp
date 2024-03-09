#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN &src) {
	*this = src;
}

RPN::~RPN() {}

RPN &RPN::operator = (const RPN &rhs)
{
	if (this != &rhs) {
		// - Copy all attributes here
	}
	return (*this);
}
