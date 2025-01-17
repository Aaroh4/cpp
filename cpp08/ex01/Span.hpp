#pragma once
#include <vector>
#include <iostream>
#include <algorithm>

class Span
{
	public:
			Span(unsigned int N);
			~Span();
			Span(const Span &input);
			Span& operator=(const Span &input);

			void addNumber(int num);

			template <typename t>
			void addRange(t start, t end)
			{
				if (_list.size() + std::distance(start, end) > _max)
					throw std::runtime_error("Range is too large to add!");
				_list.insert(_list.end(), start, end);
			}
			int shortestSpan();
			int longestSpan();
	private:
		size_t				_max;
		std::vector<int>	_list;
};