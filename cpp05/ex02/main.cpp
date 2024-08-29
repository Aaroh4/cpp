#include "Bureaucrat.hpp"

int main(void)
{
	{
		Bureaucrat	abc("abc", 2);
		Form		hello("hello", 3, 50);

		abc.signForm(hello);
	}
	{
		Bureaucrat	abc("abc", 4);
		Form		hello("hello", 3, 50);

		abc.signForm(hello);
	}
}
