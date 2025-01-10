#pragma once
#include <vector>
#include <iostream>
#include <algorithm>

class Span
{
	public:
			Span(int n);
			~Span();
			Span(const Span &input);
			Span& operator=(const Span &input);

			void addNumber(int num);
			int shortestSpan();
			int longestSpan();
	private:
		size_t				_max;
		std::vector<int>	_list;
};