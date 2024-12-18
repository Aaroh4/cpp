#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main(void)
{
	std::vector<int> list = {43, 3447, 546, 645 , 64, 654, 456};

	if (easyfind(list, 546) != list.end())
		std::cout << "Found 546!\n";
	else
		std::cout << "Did not find 546!\n";
	
	if (easyfind(list, 34) != list.end())
		std::cout << "Found '34'!\n";
	else
		std::cout << "Did not find '34'!\n";

	std::string str = "Hello";

	if (easyfind(str, 'H') != str.end())
		std::cout << "Found 'H'!\n";
	else
		std::cout << "Did not find 'H'!\n";
	
	if (easyfind(str, 'Z') != str.end())
		std::cout << "Found 'Z'!\n";
	else
		std::cout << "Did not find 'Z'!\n";
}