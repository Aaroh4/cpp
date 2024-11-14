#include <cstdlib>
#include <ctime>
#include <iostream>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{}

Base * generate(void)
{
	std::srand(std::time(nullptr));
	switch (std::rand() % 3)
	{
		case 0: 
			return (new A());
		case 1:
			return (new B());
		case 2:
			return (new C());
	}
	return (nullptr);
}

void identify(Base* p)
{
	Base *real;

	real = dynamic_cast<A*>(p);
	if (real)
	{
		std::cout << "Type: A\n";
		return ;
	}
	real = dynamic_cast<B*>(p);
	if (real)
	{
		std::cout << "Type: B\n";
		return ;
	}
	real = dynamic_cast<C*>(p);
	if (real)
	{
		std::cout << "Type: C\n";
		return ;
	}
}

void identify(Base& p)
{
	try 
	{
		A& a = dynamic_cast<A&>(p);
		(void) a;
		std::cout << "Type: A\n";
		return ;
	}
	catch (std::exception &e)
	{}
	try 
	{
		B& b = dynamic_cast<B&>(p);
		(void) b;
		std::cout << "Type: B\n";
		return ;
	}
	catch (std::exception &e)
	{}
	try 
	{
		C& c = dynamic_cast<C&>(p);
		(void) c;
		std::cout << "Type: C\n";
		return ;
	}
	catch (std::exception &e)
	{}
}

int main(void)
{
	Base* asdf = generate();

	identify(asdf);

	B asdf2;

	identify(asdf2);
}