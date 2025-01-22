#include "BitcoinExchange.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error: could not open file.\n";
		return (1);
	}
	try
	{
		BitcoinExchange exchange(argv[1]);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << "\n";
		return (1);
	}
}