#include "Span.hpp"

Span::Span(int n)
{
	_max = n;
}

Span::~Span()
{
	
}

Span::Span(Span &input)
{
	_max = input._max;
}
Span& Span::operator=(const Span &input)
{
	if (this != &input)
	{
		_max = input._max;
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
	std::sort(_list.begin(), _list.end());
}

int Span::longestSpan()
{
	if (_list.size() < 2)
		throw std::runtime_error("Under two numbers!");
}
