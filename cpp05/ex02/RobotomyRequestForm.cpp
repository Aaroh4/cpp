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

RobotomyRequestForm::RobotomyRequestForm(): _target("None")
{
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &input): _target(input._target)
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