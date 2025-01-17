#include "Span.hpp"
#include <numeric>

Span::Span(unsigned int N)
{
	_max = N;
}

Span::~Span()
{
	
}

Span::Span(const Span &input)
{
	_max = input._max;
	_list = input._list;
}
Span& Span::operator=(const Span &input)
{
	if (this != &input)
	{
		_max = input._max;
		_list = input._list;
	}
	return (*this);
}

void Span::addNumber(int num)
{
	if (_list.size() == _max)
		throw std::runtime_error("No space left!");
	_list.push_back(num);
}

int Span::shortestSpan()
{
	if (_list.size() < 2)
		throw std::runtime_error("Under two numbers!");

	std::vector<int>sort = _list;
	std::sort(sort.begin(), sort.end());

	std::vector<int> diff(sort.size() - 1);

	std::adjacent_difference(sort.begin(), sort.end(), diff.begin());
    for (auto &d : diff) {
        d = std::abs(d);
    }
	return (*std::min_element(diff.begin(), diff.end()));
}

int Span::longestSpan()
{
	if (_list.size() < 2)
		throw std::runtime_error("Under two numbers!");

	auto minmax = std::minmax_element(_list.begin(), _list.end());

	return (*minmax.second - *minmax.first);
}
