#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	Bureaucrat	asd("asd", 34);
	ShrubberyCreationForm abc(asd.getName());

	abc.executeFormAction();
	return (1);
}
