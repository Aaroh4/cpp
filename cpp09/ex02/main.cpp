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
