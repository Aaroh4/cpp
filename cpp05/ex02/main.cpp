#include "Bureaucrat.hpp"

int main(void)
{
	{
		Bureaucrat	abc("abc", 2);
		AForm		hello("hello", 3, 50);

		abc.signForm(hello);
	}
	{
		Bureaucrat	abc("abc", 4);
		AForm		hello("hello", 3, 50);

		abc.signForm(hello);
	}
}
