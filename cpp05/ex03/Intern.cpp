/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 14:57:21 by ahamalai          #+#    #+#             */
/*   Updated: 2024/08/29 15:13:55 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &input)
{
	(void) input;
}

Intern & Intern::operator=(const Intern& input)
{
	(void) input;
	return (*this);
}

Intern::~Intern()
{
}

AForm	*Intern::makeForm(std::string name, std::string target)
{
	AForm *form;
	std::string names[] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	int i = 0;

	while (names[i] != name && i < 3)
		i++;
	switch (i)
	{
		case 0:
			form = new PresidentialPardonForm(target);
			break;
		case 1:
			form = new RobotomyRequestForm(target);
			break;
		case 2:
			form = new ShrubberyCreationForm(target);
			break;
		default:
			std::cerr << "This form name doesnt exist!" << std::endl;
			exit (1);
	}
	std::cout << "Intern creates " << form->getName() << std::endl; 
	return (form);
}