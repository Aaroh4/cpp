/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 14:57:21 by ahamalai          #+#    #+#             */
/*   Updated: 2024/08/29 15:13:55 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("Presidential pardon", 25, 5), _target("None")
{
}
PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("Presidential pardon", 25, 5), _target(target)
{
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &input): PresidentialPardonForm(input._target)
{
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm& input)
{
	if (this != &input)
	{
		this->_target = input._target;
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::executeFormAction( void ) const
{
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}