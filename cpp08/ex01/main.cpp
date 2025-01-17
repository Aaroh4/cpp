#include "Span.hpp"
#include <list>

int main()
{
	Span sp = Span(5);
	sp.addNumber(-1);
	sp.addNumber(-2);
	sp.addNumber(-3);
	std::cout << "firstspan short: " << sp.shortestSpan() << std::endl;
	std::cout << "firstspan long: " << sp.longestSpan() << std::endl;

	Span newspan = Span(10000);
	for (int i = 1; i <= 10000; i++)
		newspan.addNumber(i);
	std::cout << "newspawn short: " << newspan.shortestSpan() << std::endl;
	std::cout << "newspawn long: " << newspan.longestSpan() << std::endl;

	Span newestpan = Span(3);
	std::list<int> list{4, 3, 2};
	newestpan.addRange(list.begin(), list.end());
	std::cout << "newestspan short: " << newestpan.shortestSpan() << std::endl;
	std::cout << "newestpan long: " << newestpan.longestSpan() << std::endl;

	try
	{
		newestpan.addNumber(1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << "\n";
	}

	return 0;
}