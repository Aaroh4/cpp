#include "Serializer.hpp"
#include <iostream>

int	main(void)
{
	Data asdgf;

	asdgf.a = 'b';
	asdgf.testInt = 123456;

	uintptr_t test = Serializer::serialize(&asdgf);

	std::cout << "Seralized pointer: " << test << std::endl;

	Data* last = Serializer::deserialize(test);

	std::cout << "deralized pointer: " << last << std::endl;

	std::cout << "a: " << last->a << std::endl;
	std::cout << "testInt: " << last->testInt << std::endl;

	std::cout << "original == deserialized: " << (&asdgf == last ? "True" : "False") << "\n";
}
