/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 12:57:55 by ahamalai          #+#    #+#             */
/*   Updated: 2024/06/20 14:17:42 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name(""), HP(10), EP(10), AD(0)
{
}

ClapTrap::ClapTrap(std::string _name): name(_name), HP(10), EP(10), AD(0)
{
}

ClapTrap::~ClapTrap()
{
}

void ClapTrap::attack(const std::string& target)
{
	if (this->EP > 0 && this->HP > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target <<  ", causing " << this->AD << " points of damage!" << std::endl;
		this->EP -= 1;
	}
	else if (this->HP <= 0)
		std::cout << "This claptrap is already dead!" << std::endl;
	else
		std::cout << "Not enough energy!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->HP > 0)
	{
		std::cout << "ClapTrap " << this->name << " lost " << amount << " HP" << std::endl;
		this->HP -= amount;
	}
	else
		std::cout << "ClapTrap " << this->name << " is already dead!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->EP > 0 && this->HP > 0)
	{
		std::cout << "ClapTrap " << this->name << " Repairs itself for " << amount << " HP" << std::endl;
		this->HP += amount;
		this->EP -= 1;
	}
	else if (this->HP <= 0)
		std::cout << "This claptrap is already dead!" << std::endl;
	else
		std::cout << "Not enough energy!" << std::endl;
}
