#include "iter.hpp"
#include <iostream>

template <typename T>
void processElement(T element) {
    std::cout << element << " ";
}

int main() {
	int num[] = {1, 2, 3, 4, 5};

	std::cout << "\n";
	iter(num, 5, processElement<int>);

	const std::string string[] = {"asd", "a", "s", "d"};

	std::cout << "\n";
	iter(string, 4, processElement<std::string>);
}