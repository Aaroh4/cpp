/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:04:52 by ahamalai          #+#    #+#             */
/*   Updated: 2024/08/29 14:30:34 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): _name("None"), _signed(false), _gradeSign(5), _gradeExecute(50)
{
}

AForm::AForm(std::string name, int gradeSign, int gradeExecute): _name(name), _signed(false), _gradeSign(gradeSign), _gradeExecute(gradeExecute)
{
	if (this->_gradeSign < BESTGRADE || this->_gradeExecute  < BESTGRADE)
		throw (AForm::GradeTooLowException());
	else if (this->_gradeSign > WORSTGRADE || this->_gradeExecute > WORSTGRADE)
		throw (AForm::GradeTooHighException());
}

AForm::AForm(const AForm& input): _name(input._name), _signed(input._signed), _gradeSign(input._gradeSign), _gradeExecute(input._gradeExecute)
{
}

AForm & AForm::operator=(const AForm& input)
{
	if (this != &input)
	{
		this->_signed = input._signed;
	}
	return (*this);
}

AForm::~AForm()
{
}

const char * AForm::GradeTooHighException::what() const throw()
{
    return "Grade is too high!\n";
}

const char * AForm::GradeTooLowException::what() const throw()
{
    return "Grade is too low!\n";
}

std::string AForm::getName(void) const
{
	return (this->_name);
}

bool		AForm::getSigned(void) const
{
	return (this->_signed);
}

int			AForm::getGradeSign(void) const
{
	return (this->_gradeSign);
}

int			AForm::getGradeExecute(void) const
{
	return (this->_gradeExecute);
}

void		AForm::beSigned(Bureaucrat &input)
{
	if (input.getGrade() <= this->_gradeSign)
		this->_signed = true;
	else
		throw (AForm::GradeTooLowException());
}
std::ostream	&operator<<(std::ostream &stream, AForm const &f)
{
	stream << "AAForm name: " << f.getName() << std::endl;
	stream << "Grade to sign: " << f.getGradeSign() << std::endl;
	stream << "Grade to execute: " << f.getGradeExecute() << std::endl;
	if (f.getSigned() == true)
		stream << "AAForm is signed" << std::endl;
	else
		stream << "AAForm isnt signed" << std::endl;
	return (stream);
}
