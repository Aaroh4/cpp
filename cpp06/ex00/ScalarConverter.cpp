#include "ScalarConverter.hpp"

int	converter(std::string input, int &i, char &c, float &f, double &d, types type)
{
	try
	{
		switch (type)
		{
			case CHAR:
				c = input[0];
				i = static_cast<int>(c);
				f = static_cast<float>(c);
				d = static_cast<double>(c);
				break;
			case INT:
				i = std::stoi(input);
				c = static_cast<char>(i);
				f = static_cast<float>(i);
				d = static_cast<double>(i);
				break;
			case FLOAT:
				f = std::stof(input);
				i = static_cast<int>(f);
				c = static_cast<char>(f);
				d = static_cast<double>(f);
				break;
			case DOUBLE:
				d = std::stod(input);
				i = static_cast<int>(d);
				c = static_cast<char>(d);
				f = static_cast<float>(d);
				break;
			default:
				std::cout << "Could not find type!" << std::endl;
				break;
		}
	}
	catch (std::exception &e)
	{
		std::cout << "Not a valid conversion!" << std::endl;
		return (-1);
	}
	return (0);
}

int	is_int(std::string input)
{
	if (input.empty())
		return (0);
	for (int i = 0; input[i] != '\0'; i++)
		if (!isdigit(input[i]) && (i != 0 && input[i] != '-'))
			return (0);
	return (1);
}

types get_type(std::string input)
{
	if (!isdigit(input[0]) && input.length() == 1)
		return (CHAR);
	if (is_int(input))
		return (INT);
	size_t	dot_pos = input.find('.');
	if (is_int(input.substr(0, dot_pos)) && dot_pos != input.length() - 1)
	{
		if (is_int(input.substr(dot_pos + 1, input.length() - dot_pos - 1)))
			return (DOUBLE);
		if (input[input.length() - 1] == 'f' && is_int(input.substr(dot_pos + 1, input.length() - dot_pos - 2)))
			return (FLOAT);
	}
	if (input == "-inff" || input == "+inff" || input == "nanf")
		return FLOAT;
	if (input == "-inf" || input == "+inf" || input == "nan")
		return DOUBLE;
	return (NONE);
}

void	print_con(int i, char c, float f, double d)
{
	std::cout << c << std::endl;
	std::cout << i << std::endl;
	std::cout << f << std::endl;
	std::cout << d << std::endl;
}

void ScalarConverter::convert(std::string input)
{
	int	i;
	char c;
	float f;
	double d;

	if (converter(input, i, c, f, d, get_type(input)) == -1)
		return;
	print_con(i, c, f, d);
}
