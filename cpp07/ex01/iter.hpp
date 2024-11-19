#pragma once
#include <cstddef>

template<typename array, typename func>
void iter(array *addr, const size_t len, func function)
{
	for (size_t i = 0; i < len; i++)
	{
		function(addr[i]);
	}
}

template<typename array, typename func>
void iter(const array *addr, const size_t len, func function)
{
	for (size_t i = 0; i < len; i++)
	{
		function(addr[i]);
	}
}