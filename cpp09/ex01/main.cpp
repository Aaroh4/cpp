#include "RPN.hpp"
#include <utility>

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

	int i = 0;
	for (char c : arg)
	{
		if (isdigit(c))
			continue ;
		else if (c == ' ')
		{
			if (nums.first)
				nums.second = stof(arg.substr(0, i)); // stof needs error check
			else if (nums.second)
				std::cout << nums.first << " " << arg.substr(1, 2) << " " << nums.second << "\n"; 
			else
			{
				//std::cout << arg.substr(0, i) << ":\n";
				nums.first = stof(arg.substr(0, i) + ".0"); // stof needs error check
			}
			arg.erase(0, i);
		}
		i++;
	}
}