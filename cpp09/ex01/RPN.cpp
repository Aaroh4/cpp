#include "RPN.hpp"
#include <utility>
#include <cmath> 

RPN::RPN(std::string arg)
{
	int	countChars = 0;
	int	countNums = 0;

	for (auto it = arg.begin(); it <= arg.end();)
	{
		if (std::string("+-/*").find(*it) != std::string::npos)
		{
			if (countNums < 2)
				throw std::runtime_error("Error: wrong arguments");
			m_elements.push_back(*it);
			countChars++;
		}
		else if (isdigit(*it))
		{
			m_elements.push_back(*it - '0');
			countNums++;
		}
		if ((*(it + 1) != ' ' && *(it + 1) != '\0') 
			|| (it + 1 == arg.end() && !(std::string("+-/*").find(*it) != std::string::npos)))
			throw std::runtime_error("Error: wrong arguments");
		else
			it += 2;
	}
	if (countNums - 1 != countChars || countChars == 0)
		throw std::runtime_error("Error: wrong arguments");

	makeCalc();
}

void RPN::makeCalc()
{
	int64_t result;
	for (size_t i = 0; i < m_elements.size(); i++)
	{
		if (std::holds_alternative<char>(m_elements[i]))
		{
			int64_t a = std::get<int64_t>(m_elements[i - 2]);
			int64_t b = std::get<int64_t>(m_elements[i - 1]);
			switch (std::get<char>(m_elements[i]))
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
					}
					else 
					{
						if (b > 0 && a < INT64_MIN / b) throw std::overflow_error("Error: overflow");
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
			m_elements.insert(m_elements.begin() + i - 2, result);
			m_elements.erase(m_elements.begin() + i - 1, m_elements.begin() + i + 2);
			i = 0;
		}
	}
	std::cout << result << "\n";
}

RPN::~RPN()
{

}