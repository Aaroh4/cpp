/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:04:52 by ahamalai          #+#    #+#             */
/*   Updated: 2024/08/29 14:30:34 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("None"), _signed(false), _gradeSign(5), _gradeExecute(50)
{
}

Form::Form(std::string name, int gradeSign, int gradeExecute): _name(name), _signed(false), _gradeSign(gradeSign), _gradeExecute(gradeExecute)
{
	if (this->_gradeSign < BESTGRADE || this->_gradeExecute  < BESTGRADE)
		throw (Form::GradeTooLowException());
	else if (this->_gradeSign > WORSTGRADE || this->_gradeExecute > WORSTGRADE)
		throw (Form::GradeTooHighException());
}

Form::Form(const Form& input): _name(input._name), _signed(input._signed), _gradeSign(input._gradeSign), _gradeExecute(input._gradeExecute)
{
}

Form & Form::operator=(const Form& input)
{
	if (this != &input)
	{
		this->_signed = input._signed;
	}
	return (*this);
}

Form::~Form()
{
}

const char * Form::GradeTooHighException::what() const throw()
{
    return "Grade is too high!\n";
}

const char * Form::GradeTooLowException::what() const throw()
{
    return "Grade is too low!\n";
}

std::string Form::getName(void) const
{
	return (this->_name);
}

bool		Form::getSigned(void) const
{
	return (this->_signed);
}

int			Form::getGradeSign(void) const
{
	return (this->_gradeSign);
}

int			Form::getGradeExecute(void) const
{
	return (this->_gradeExecute);
}

void		Form::beSigned(Bureaucrat &input)
{
	if (input.getGrade() <= this->_gradeSign)
		this->_signed = true;
	else
		throw (Form::GradeTooLowException());
}
std::ostream	&operator<<(std::ostream &stream, Form const &f)
{
	stream << "Form name: " << f.getName() << std::endl;
	stream << "Grade to sign: " << f.getGradeSign() << std::endl;
	stream << "Grade to execute: " << f.getGradeExecute() << std::endl;
	if (f.getSigned() == true)
		stream << "Form is signed" << std::endl;
	else
		stream << "Form isnt signed" << std::endl;
	return (stream);
}
