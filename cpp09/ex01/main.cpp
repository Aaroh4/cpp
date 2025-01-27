#include "RPN.hpp"
#include <utility>
#include <cmath> 

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Wrong arguments\n";
		return (1);
	}

	//std::cout << argv[1] << "\n";

	std::string arg = argv[1];
	
	int offset = 0;

	std::pair<int, int> nums;

		//	if (*(it + 1) != ' ' && *(it + 1) != '\0')
		//{
		//	std::cerr << "error wrong argument\n";
		//	exit (1);
		//}
		//else
		//	it += 2;

	for (auto it = arg.begin(); it <= arg.end();)
	{
		if (*it == '+' || *it == '-' || *it == '/' || *it == '*')
		{	
			nums.first = std::stoi(arg.substr(it - arg.begin() - 4, 1));
			std::cout << "asd\n";
			nums.second = std::stoi(arg.substr(it - arg.begin() - 2, 1));
			
			int result;
			switch (*it)
			{
				case '+':
					result = nums.first + nums.second;
					break;
				case '-':
					result = nums.first - nums.second;
					break;
				case '*':
					result = nums.first * nums.second;
					break;
				case '/':
					result = nums.first / nums.second;
					break;
			}
			nums = {0, 0};
			offset = std::to_string(result).length();
			std::cout << "offset: " << offset << "\n";
			arg.insert(it - arg.begin() - 4, std::to_string(result));
			std::cout << arg << ":\n";
			if (offset > 1)
				arg.erase(it - arg.begin() - 4 + offset, it - arg.begin() - 3 + offset);
			else
				arg.erase(it - arg.begin() - 3, it - arg.begin() - 3);
			std::cout << arg << ":2\n";
			//exit (0);
			//if (arg.length() == 1)
			//{
			//	arg.erase(0, 1);
			//	std::cout << result << "\n";
			//	exit (0);
			//}
			//std::cout << arg << ":\n";
			//std::cout << arg << ":2\n";
			it = arg.begin();
			continue;
		}
		it++;
	}

	std::cout << arg << "\n";

	//for (auto it = arg.begin(); it <= arg.end();)
	//{
	//	std::cout << "sasd:" << arg << ":\n";
	//	if (nums.second != 0.0)
	//	{
	//		std::cout << nums.first << " " << arg.substr(0, it - arg.begin()) << " " << nums.second << "\n"; 
	//		nums = {0.0, 0.0}; // first is the sum the second needs to be set again
	//		it++;
	//		continue ;
	//	}
	//	else if (isdigit(*it)) // needs more checking that the third part isnt num
	//	{
	//		it++;
	//		continue ;
	//	}
	//	else if (*it == ' ')
	//	{
	//		if (nums.first != 0.0)
	//		{
	//			std::cout << arg.substr(0, it - arg.begin()) << ":2\n";
	//			nums.second = stof(arg.substr(0, it - arg.begin())); // stof needs error check
	//		}
	//		else
	//		{
	//			nums.first = stof(arg.substr(0, it - arg.begin()) + ".0"); // stof needs error check
	//			std::cout << nums.first << ":\n";
	//		}
	//		arg.erase(0, it - arg.begin() + 1);
	//		std::cout << "sasd2:" << arg << ":\n";
	//		continue ;
	//	}
	//	it++;
	//}
}