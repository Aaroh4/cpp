#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

const std::string Bureaucrat::getName()
{
	return (this->name);
}

int	Bureaucrat::getGrade()
{
	return (this->grade);
}

void Bureaucrat::decrement(int num)
{
	this->grade += num;
}

void Bureaucrat::increment(int num)
{
	this->grade -= num;
}
