#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &src) {
	*this = src;
}

ScalarConverter::~ScalarConverter() {}

ScalarConverter &ScalarConverter::operator = (const ScalarConverter &rhs) {
	if (this != &rhs) {
		// - Copy all attributes here
	}
	return (*this);
}

std::string	parsing(std::string *toConvert) {
	if (*toConvert == "-inff" || *toConvert == "-inf")
		return "char : impossible\nint : impossible\nfloat : -inff\ndouble : -inf\n";
	if (*toConvert == "+inff" || *toConvert == "+inf")
		return "char : impossible\nint : impossible\nfloat : +inff\ndouble : +inf\n";
	if (*toConvert == "nanf" || *toConvert == "nan")
		return "char : impossible\nint : impossible\nfloat : nanf\ndouble : nan\n";
	if (toConvert->length() == 1 && !isdigit(toConvert[0][0]))
		return "char";
	if (toConvert->length() == 3 && toConvert[0][0] == '\'' && isdigit(toConvert[0][1]) && toConvert[0][2] == '\'') {
		*toConvert = toConvert->substr(1, 1);
		return "char";
	}
	if (isnumber(toConvert[0][0]) || toConvert[0][0] == '-' || toConvert[0][0] == '+') {
		size_t i = 1;
		while (i < toConvert->length() && isnumber(toConvert[0][i]))
			i++;
		if (toConvert[0][i] == '\0')
			return "int";
		if (toConvert[0][i] == '.' && toConvert[0][i + 1]) {
			i++;
			while (i < toConvert->length() && isnumber(toConvert[0][i]))
				i++;
			if (toConvert[0][i] == '\0')
				return "double";
			if (toConvert[0][i] == 'f' && toConvert[0][i + 1] == '\0')
				return "float";
		}
	}
	return "Invalid input";
}

void convertChar(char c) {
	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << (int)c << std::endl;
	std::cout << "float: " << (float)c << ".0f" << std::endl;
	std::cout << "double: " << (double)c << ".0" << std::endl;
}

void convertInt(int n) {
	if (n >= 0 && n <= 127) {
		if (n >= 32 && n <= 126)
			std::cout << "char: '" << (char)n << "\'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	else
		std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << n << std::endl;
	std::cout << "float: " << n << ".0f" << std::endl;
	std::cout << "double: " << n << ".0" << std::endl;
}

void convertFloat(float n) {
	if ((int)n >= 0 && (int)n <= 127) {
		if ((int)n >= 32 && (int)n <= 126)
			std::cout << "char: '" << (char)((int)n) << "\'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	else
		std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << (int)n << std::endl;
	if (n - (int)n == 0.0f) {
		std::cout << "float: " << n << ".0f" << std::endl;
		std::cout << "double: " << (double)n << ".0" << std::endl;
	}
	else {
		std::cout << std::fixed << std::setprecision(50) << "float: " << n << "f" << std::endl;
		std::cout << std::fixed << std::setprecision(50) << "double: " << (double)n << std::endl;
	}
}

void convertDouble(double n) {
	if ((int)n >= 0 && (int)n <= 127) {
		if ((int)n >= 32 && (int)n <= 126)
			std::cout << "char: '" << (char)((int)n) << "\'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	else
		std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << (int)n << std::endl;
	if (n - (int)n == 0.0) {
		std::cout << "float: " << (float)n << ".0f" << std::endl;
		std::cout << "double: " << n << ".0" << std::endl;
	}
	else {
		std::cout << std::fixed << std::setprecision(50) << "float: " << (float)n << "f" << std::endl;
		std::cout << std::fixed << std::setprecision(50) << "double: " << n << std::endl;
	}
}

void	ScalarConverter::convert(std::string toConvert) {
	std::string type = parsing(&toConvert);
	std::cout << type << std::endl;
	if (type == "char")
		return convertChar((char)toConvert[0]);
	else if (type == "int")
		return convertInt(atoi(toConvert.c_str()));
	else if (type == "float")
		convertFloat(atof(toConvert.c_str()));
	else if (type == "double")
		convertDouble(atof(toConvert.c_str()));
	else
		std::cout << type << std::endl;
}
