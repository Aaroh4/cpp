#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("none"), _grade(150)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	if (grade < BESTGRADE)
		throw(Bureaucrat::GradeTooLowException());
	if (grade > WORSTGRADE)
		throw(Bureaucrat::GradeTooHighException());
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& input): _name(input._name), _grade(input._grade)
{
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat& input)
{
	if (this != &input)
		this->_grade = input._grade;
	return (*this);
}

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::decrement()
{
	if (this->_grade >= WORSTGRADE)
		throw(Bureaucrat::GradeTooHighException());
	this->_grade++;
}

void Bureaucrat::increment()
{
	if (_grade <= BESTGRADE)
		throw(Bureaucrat::GradeTooLowException());
	this->_grade--;
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high!\n";
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low!\n";
}

std::ostream	&operator<<(std::ostream &stream, Bureaucrat const &f)
{
    stream << f.getName() << ", bureaucrat grade " << f.getGrade() << std::endl;
	return (stream);
}
