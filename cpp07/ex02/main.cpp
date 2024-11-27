#include <iostream>

#include "Array.hpp"

int main(int, char**)
{
	Array<int> empty;
	try
	{
		std::cout << "Printing 0 size array index 0:\n";
		std::cout << empty[0] << "\n";
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << "\n\n";
	}

	Array<std::string> strs(4);
	try
	{
		std::cout << "Adding stuff to array:\n";
		strs[0] = "asd";
		strs[1] = "abc";
		strs[2] = "sdfd";
		strs[3] = "dfhgjhk";
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << "\n";
	}
	std::cout << "{";
	for (size_t i = 0; i < strs.size(); i++)
	{
		if (i != 0)
			std::cout << ", ";
		std::cout << strs[i];
	}
	std::cout << "}\n";

	return 0;
}