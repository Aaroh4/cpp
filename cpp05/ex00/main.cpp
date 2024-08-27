#include "Bureaucrat.hpp"

int main(void)
{
	{
		Bureaucrat abc;

		std::cout << abc.getGrade() << std::endl;
		abc.increment();
		std::cout << abc.getGrade() << std::endl;
		abc.decrement();
	//	abc.decrement();
	}
	{
		try
		{
			Bureaucrat e("hello", 0);
		}
		catch (std::exception & e)
		{
			std::cerr << e.what();
		}
	}
}
