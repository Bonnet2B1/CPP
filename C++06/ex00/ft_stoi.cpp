#include <iostream>
#include <sstream>

int ft_stoi( std::string & s ) {
	int i;
	std::istringstream(s) >> i;
	return i;
}
