#pragma once

#include <algorithm>

template<typename T>
typename T::iterator easyfind(T& first, int second)
{
	return (std::find(first.begin(), first.end(), second));
}
