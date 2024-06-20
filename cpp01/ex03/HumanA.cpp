/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:23:12 by ahamalai          #+#    #+#             */
/*   Updated: 2024/06/17 15:12:02 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

void	HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->getWeapon() << "\n";
}

void	HumanA::setName(std::string _name)
{
	this->name = _name;
}

void	HumanA::setWeapon(Weapon _weapon)
{
	this->weapon = _weapon;
}

const std::string&	HumanA::getWeapon()
{
	return (this->weapon.getType());
}

HumanA::HumanA(std::string _name, Weapon &_weapon): weapon(_weapon)
{
	HumanA::setName(_name);
}

HumanA::~HumanA(void)
{
}
