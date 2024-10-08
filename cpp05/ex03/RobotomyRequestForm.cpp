/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 14:57:21 by ahamalai          #+#    #+#             */
/*   Updated: 2024/08/29 15:13:55 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("Robotomy request", 72, 45), _target("None")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("Robotomy request", 72, 45), _target(target)
{
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &input): RobotomyRequestForm(input._target)
{
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm& input)
{
	if (this != &input)
	{
		this->_target = input._target;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}
void RobotomyRequestForm::executeFormAction(void) const
{
	static	int i;
	i++;
	if (i % 2 == 0)
		std::cout << this->_target << " has been robotomized" << std::endl;
	else
		std::cout << "robotomy failed!" << std::endl;
	if (i == 100)
		i = 0;
}