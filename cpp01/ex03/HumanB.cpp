/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:23:12 by ahamalai          #+#    #+#             */
/*   Updated: 2024/06/17 15:12:17 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

void	HumanB::attack()
{
	std::cout << this->name << " attacks with their " << this->getWeapon() << "\n";
}

void	HumanB::setName(std::string _name)
{
	this->name = _name;
}

void	HumanB::setWeapon(Weapon &_weapon)
{
	this->weapon = &_weapon;
}

const std::string&	HumanB::getWeapon()
{
	return (this->weapon->getType());
}

HumanB::HumanB(std::string _name): weapon(NULL)
{
	HumanB::setName(_name);
}

HumanB::~HumanB(void)
{
}
