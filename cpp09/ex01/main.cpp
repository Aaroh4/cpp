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

	std::cout << argv[1] << "\n";

	std::string arg = argv[1];
	
	std::pair<float, float> nums;

	for (auto it = arg.begin(); it <= arg.end();)
	{
		std::cout << "sasd:" << arg << ":\n";
		if (nums.second != 0.0)
			std::cout << nums.first << " " << arg.substr(0, it - arg.begin()) << " " << nums.second << "\n"; 
		else if (isdigit(*it)) // needs more checking that the third part isnt num
		{
			it++;
			continue ;
		}
		else if (*it == ' ')
		{
			if (nums.first != 0.0)
			{
				std::cout << arg.substr(0, it - arg.begin()) << ":2\n";
				nums.second = stof(arg.substr(0, it - arg.begin())); // stof needs error check
			}
			else
			{
				nums.first = stof(arg.substr(0, it - arg.begin()) + ".0"); // stof needs error check
				std::cout << nums.first << ":\n";
			}
			arg.erase(0, it - arg.begin() + 1);
			std::cout << "sasd2:" << arg << ":\n";
			continue ;
		}
		it++;
	}
}