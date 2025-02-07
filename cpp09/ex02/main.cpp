#include "PmergeMe.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "Error\n";
		exit (1);
	}
	try
	{
		PmergeMe a(argv);
	}
	catch(const std::exception& e)
	{
		std::cout << "Error\n";
		exit (1);
	}

}
