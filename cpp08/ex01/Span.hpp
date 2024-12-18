#pragma once
#include <vector>
#include <iostream>
#include <algorithm>

class Span
{
	public:
			Span(int n);
			~Span();
			Span(Span &input);
			Span& operator=(const Span &input);

			void addNumber(int num);
			int shortestSpan();
			int longestSpan();
	private:
		int					_max;
		std::vector<int>	_list;
};