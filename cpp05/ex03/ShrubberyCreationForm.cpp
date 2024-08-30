/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 14:57:21 by ahamalai          #+#    #+#             */
/*   Updated: 2024/08/30 11:32:16 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("Shrubbery creation", 145, 137), _target("None")
{
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("Shrubbery creation", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &input): ShrubberyCreationForm(input._target)
{
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm& input)
{
	if (this != &input)
	{
		this->_target = input._target;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::executeFormAction( void ) const
{
	std::ofstream of(this->_target + "_shrubbery");
	if (!of)
	{
		std::cerr << "Failed to open the file" << std::endl;
		exit (1);
	}
	of << 
"                                1\n"
"                               111\n"
"                              11111\n"
"                             1111111\n"
"                            111111111\n"
"                           11111111111\n"
"                          1111111111111\n"
"                         111111111111111\n"
"                        11111111111111111\n"
"                       1111111111111111111\n"
"                      111111111111111111111\n"
"                     11111111111111111111111\n"
"                    1111111111111111111111111\n"
"                   111111111111111111111111111\n"
"                  11111111111111111111111111111\n"
"                            1111111111\n"
"                            1111111111\n"
"                            1111111111\n"
"                            1111111111\n"
"                            1111111111\n"
"                            1111111111" << std::endl;
	        of.flush();
			of.close();
}