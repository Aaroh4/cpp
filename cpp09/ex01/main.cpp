#include "RPN.hpp"
#include <utility>
#include <cmath> 
#include <deque>
#include <variant>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Wrong arguments\n";
		return (1);
	}

	std::string arg = argv[1];
	
	int	countChars = 0;
	int	countNums = 0;

	std::deque<std::variant<int64_t, char>> elements;

	for (auto it = arg.begin(); it <= arg.end();)
	{
		if (*it == '+' || *it == '-' || *it == '/' || *it == '*' )
		{
			elements.push_back(*it);
			countChars++;
		}
		else if (isdigit(*it))
		{
			elements.push_back(*it - '0');
			countNums++;
		}
		if (*(it + 1) != ' ' && *(it + 1) != '\0')
			throw std::runtime_error("Error: wrong arguments")
		else
			it += 2;
	}

	for (size_t i = 0; i < elements.size(); i++)
	{
		if (std::holds_alternative<char>(elements[i]))
		{
			int64_t a = std::get<int64_t>(elements[i - 2]);
			int64_t b = std::get<int64_t>(elements[i - 1]);
			int64_t result;
			switch (std::get<char>(elements[i]))
			{
				case '+':
					if ((b > 0 && a > INT64_MAX - b) || (b < 0 && a < INT64_MIN - b))
         				throw std::overflow_error("Error: overflow");
					result = a + b;
					break;
				case '-':
					if ((b > 0 && a < INT64_MIN + b) || (b < 0 && a > INT64_MAX + b))
           				throw std::overflow_error("Error: overflow");
					result = a - b;
					break;
				case '*':
					if (a > 0) 
					{
						if (b > 0 && a > INT64_MAX / b) throw std::overflow_error("Error: overflow");
						if (b < 0 && b < INT64_MIN / a) throw std::overflow_error("Error: overflow");
					} 
					else 
					{
						if (b > 0 && a < INT64_MIN / b) throw std::overflow_error("Error: overflow");
						if (b < 0 && a < INT64_MAX / b) throw std::overflow_error("Error: overflow");
					}
					result = a * b;
					break;
				case '/':
					if (b == 0) 
						throw std::runtime_error("Error: division by zero");
    				if (a == INT64_MIN && b == -1) 
						throw std::overflow_error("Error: overflow");
					result = a / b;
					break;
			}
			elements.insert(elements.begin() + i - 2, result);
			elements.erase(elements.begin() + i + 1);
			elements.erase(elements.begin() + i);
			elements.erase(elements.begin() + i - 1);
			std::cout << result << "\n";
			i = 0;
		}
	}

}