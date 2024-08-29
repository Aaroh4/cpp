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

PresidentialPardonForm::PresidentialPardonForm(): _target("None"), AForm("Presidential pardon", 25, 5)
{
}
PresidentialPardonForm::PresidentialPardonForm(std::string target): _target(target), AForm("Presidential pardon", 25, 5)
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