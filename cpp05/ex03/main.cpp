#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"


int main(void)
{
	{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		AForm* aaa;
		aaa = someRandomIntern.makeForm("dfsdgh", "Bender");
		std::cout << rrf->getName() << std::endl;
	}
	return (1);
}
