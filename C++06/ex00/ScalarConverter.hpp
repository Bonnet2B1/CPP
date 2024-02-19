#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <cstdlib>
# include <sstream>
# include <iomanip>


class ScalarConverter {

public:
	virtual ~ScalarConverter();
	ScalarConverter &operator = (const ScalarConverter &rhs);

	static void	convert(std::string toConvert);

private:
	ScalarConverter();
	ScalarConverter(const ScalarConverter &src);

};

int ft_stoi( std::string & s );

#endif // SCALARCONVERTER_HPP
