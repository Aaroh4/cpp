#include "PmergeMe.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "Error: Wrong arguments\n";
		exit (1);
	}
	try
	{
		for (int i = 1; i < argc; i++)
		{
			int num = std::stoi(argv[i]);
			if (num < 0)
				throw std::invalid_argument("Non positive numbers");
			std::string remaining = argv[i];
			if (remaining != std::to_string(num))
				throw std::invalid_argument("invalid input");
		}
		std::cout << "Before: ";
		for (int i = 1; i < argc; i++)
			std::cout << argv[i] << " ";
		PmergeMe a(argv);
	}
	catch(const std::exception& e)
	{
		std::cout << "Error: " << e.what() << "\n";
		exit (1);
	}

}
