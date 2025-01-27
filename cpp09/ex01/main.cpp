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

	//std::cout << argv[1] << "\n";

	std::string arg = argv[1];
	

	std::deque<std::variant<int, char>> elements;

	for (auto it = arg.begin(); it <= arg.end();)
	{
		if (*it == '+' || *it == '-' || *it == '/' || *it == '*' )
			elements.push_back(*it);
		else if (isdigit(*it))
			elements.push_back(*it - '0');
		if (*(it + 1) != ' ' && *(it + 1) != '\0')
		{
			std::cerr << "error wrong argument\n";
			exit (1);
		}
		else
			it += 2;
	}

	for (size_t i = 0; i < elements.size(); i++)
	{
		if (std::holds_alternative<char>(elements[i]))
		{
			int result;
			switch (std::get<char>(elements[i]))
			{
				case '+':
					result = std::get<int>(elements[i - 2]) + std::get<int>(elements[i - 1]);
					break;
				case '-':
					result = std::get<int>(elements[i - 2]) - std::get<int>(elements[i - 1]);
					break;
				case '*':
					result = std::get<int>(elements[i - 2]) * std::get<int>(elements[i - 1]);
					break;
				case '/':
					result = std::get<int>(elements[i - 2]) / std::get<int>(elements[i - 1]);
					break;
			}
			//int result = std::get<int>(elements[i - 1]) + std::get<int>(elements[i - 2]);
			elements.insert(elements.begin() + i - 2, result);
			elements.erase(elements.begin() + i + 1);
			elements.erase(elements.begin() + i);
			elements.erase(elements.begin() + i - 1);
			//for (size_t j = 0; j < elements.size(); j++)
			//{
			//	if (std::holds_alternative<char>(elements[j]))
			//		std::cout << std::get<char>(elements[j]) << "\n";
			//	else
			//		std::cout << std::get<int>(elements[j]) << "\n";
			//}
			std::cout << result << "\n";
			//exit (0);
			i = 0;
		}
	}



	//for (size_t i = 0; i < elements.size(); i++)
	//{
	//	//std::cout << elements[i] << '\n';
	//}

	//for (auto it = arg.begin(); it <= arg.end();)
	//{
	//	if (*it == '+' || *it == '-' || *it == '/' || *it == '*')
	//	{	
	//		//nums.first = std::stoi(arg.substr(it - arg.begin() - 4, 1));
	//		//std::cout << "asd\n";
	//		//nums.second = std::stoi(arg.substr(it - arg.begin() - 2, 1));
	//		nums.first = std::stoi(arg.substr(it - arg.begin() - 4 - offset, 1));
	//		nums.second = std::stoi(arg.substr(it - arg.begin() - 2 - offset, 1 + offset));
	//		int result;
	//		switch (*it)
	//		{
	//			case '+':
	//				result = nums.first + nums.second;
	//				break;
	//			case '-':
	//				result = nums.first - nums.second;
	//				break;
	//			case '*':
	//				result = nums.first * nums.second;
	//				break;
	//			case '/':
	//				result = nums.first / nums.second;
	//				break;
	//		}
	//		if (it == arg.end() - 1)
	//		{
	//			std::cout << result << '\n';
	//			exit(0);
	//		}
	//		nums = {0, 0};
	//		offset = std::to_string(result).length() - 1;
	//		std::cout << "offset: " << offset << "\n";
	//		arg.insert(it - arg.begin() - 4, std::to_string(result));
	//		std::cout << arg << ":\n";
	//		if (offset)
	//			arg.erase(it - arg.begin() - 3 + offset, it - arg.begin() - 2 + offset);
	//		else
	//			arg.erase(it - arg.begin() - 3, it - arg.begin() - 3);
	//		std::cout << arg << ":2\n";
	//		//exit (0);
	//		//if (arg.length() == 1)
	//		//{
	//		//	arg.erase(0, 1);
	//		//	std::cout << result << "\n";
	//		//	exit (0);
	//		//}
	//		//std::cout << arg << ":\n";
	//		//std::cout << arg << ":2\n";
	//		it = arg.begin();
	//		continue;
	//	}
	//	it++;
	//}

}