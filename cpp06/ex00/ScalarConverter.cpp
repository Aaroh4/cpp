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
				return (-1);
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
		if (!std::isdigit(input[i]) && !(i == 0 && input[i] == '-'))
			return (0);
	return (1);
}

types get_type(std::string input)
{
	if (!isdigit(input[0]) && input.length() == 1)
		return (CHAR);
	if (is_int(input))
		return (INT);
	int	dot_pos = input.find('.');
	if (is_int(input.substr(0, dot_pos)) && is_int(input.substr(dot_pos + 1, std::string::npos)))
		return (DOUBLE);
	if (input[input.length() - 1] == 'f' && is_int(input.substr(0, dot_pos)) 
		&& is_int(input.substr(dot_pos + 1, input.length() - dot_pos - 2)))
		return (FLOAT);
	if (input == "-inff" || input == "+inff" || input == "nanf")
		return FLOAT;
	if (input == "-inf" || input == "+inf" || input == "nan")
		return DOUBLE;
	return (NONE);
}

void	print_con(int i, char c, float f, double d)
{
	if (d >= 0 && d <= 255 && std::isprint(c))
		std::cout << "char: '" << c << "'\n";
	else if (d >= 0 && d <= 255)
		std::cout << "char: " << "Non displayable\n";
	else
		std::cout << "char: " << "impossible\n";

	if (std::numeric_limits<int>::min() <= d && std::numeric_limits<int>::max() >= d)
		std::cout << "int: " << i << "\n";
	else
		std::cout << "int: impossible \n";

	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << f << "f\n";
	std::cout << "double: " << d << "\n";
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

ScalarConverter::ScalarConverter(const ScalarConverter &)
{
}

ScalarConverter ScalarConverter::operator=(const ScalarConverter &)
{
	return (*this);
}

ScalarConverter::~ScalarConverter()
{
}