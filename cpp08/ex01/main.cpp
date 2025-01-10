#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(-1);
	sp.addNumber(-2);
	sp.addNumber(-3);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}