#include "ScalarConverter.hpp"

int	is_int(std::string input)
{
	if (input.empty())
		return (0);
	for (int i = 0; input[i] != '\0'; i++)
		if (!isdigit(input[i]) && (i != 0 && input[i] == '-'))
			return (0);
	return (1);
}

types get_type(std::string input)
{
	if (!isdigit(input[0]) && input.length() == 1)
		return CHAR;
	if (is_int(input))
		return INT;


	return NONE;
}

void ScalarConverter::convert(std::string input)
{

	switch (get_type(input))
	{
		case INT:

		case CHAR:

		case FLOAT:

		case DOUBLE:

		default:

	};
	//static_cast<double>();
}