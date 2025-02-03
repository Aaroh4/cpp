#include "PmergeMe.hpp"
#include <iostream>
#include <regex>

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "Error\n";
		exit (1);
	}	
	for (int i = 1; argv[i]; i++)
		for (int j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				std::cout << "Error\n";
				exit (1);
			}
		}
}
