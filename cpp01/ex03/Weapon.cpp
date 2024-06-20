/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 11:00:51 by ahamalai          #+#    #+#             */
/*   Updated: 2024/06/17 14:54:20 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const	std::string& Weapon::getType()
{
	return (this->type);
}

void	Weapon::setType(std::string _type)
{
	this->type = _type;
}

Weapon::Weapon(std::string _type)
{
	this->setType(_type);
}

Weapon::~Weapon(void)
{
}