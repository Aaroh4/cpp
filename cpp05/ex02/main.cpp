#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	Bureaucrat	asd("asd", 34);
	ShrubberyCreationForm abc(asd.getName());
	PresidentialPardonForm presidentform(asd.getName());
	RobotomyRequestForm		robot(asd.getName());

	abc.executeFormAction();
	presidentform.executeFormAction();
	robot.executeFormAction();
	return (1);
}
