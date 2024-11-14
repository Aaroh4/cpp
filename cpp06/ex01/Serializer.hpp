#pragma once

#include <stdint.h>

struct Data
{
	int			testInt;
	char		a;
};


class Serializer
{
	public:
		static uintptr_t serialize(Data* ptr);

		static Data* deserialize(uintptr_t raw);
	private:
		Serializer();
		Serializer(const Serializer &);
		Serializer operator=(const Serializer &);
		~Serializer();
};