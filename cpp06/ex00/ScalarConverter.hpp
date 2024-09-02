#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iomanip>
#include <iostream>
#include <limits>

enum types
{
	INT,
	CHAR,
	DOUBLE,
	FLOAT,
	NONE,
};

class ScalarConverter
{
	public:
			static void convert(std::string input);
	private:
			ScalarConverter();
			ScalarConverter(const ScalarConverter &);
			ScalarConverter operator=(const ScalarConverter &);
			~ScalarConverter();
};

#endif