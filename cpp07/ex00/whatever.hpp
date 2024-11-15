#pragma once

template<typename t>
void swap(t& first, t& second)
{
	t temp = first;
	first = second;
	second = temp;
}

template<typename t>
t min(t& first, t& second)
{
	return ((first >= second) ? second : first);
}

template<typename t>
t max(t& first, t& second)
{
	return ((first <= second) ? second : first);
}