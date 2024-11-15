#include "iter.hpp"
#include <iostream>

template <typename T>
void processElement(T element) {
    std::cout << element << " ";
}

void increment(int &i)
{
	i++;
}

int main() {
	int ints[] = {1, 2, 3, 4, 5};
	std::string strings[] = {"hello", "mom", "amazing", "wow!"};

	std::cout << "\n";
	iter(ints, 5, processElement<int>);
	std::cout << "\n";
	iter(strings, 4, processElement<std::string>);

	std::cout << "\n";
	iter(ints, 5, increment);
	iter(ints, 5, processElement<int>);

	std::cout << "\n";
	const int constInts[] = {1, 2, 3, 4, 5};
	iter(constInts, 5, processElement<int>);

    return 0;
}