/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 14:23:25 by ahamalai          #+#    #+#             */
/*   Updated: 2024/06/24 16:04:33 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("")
{
	this->HP = 100;
	this->EP = 50;
	this->AD = 20;
	this->guarding_gate = false;
	std::cout << "ScavTrap constructed!" << std::endl;
}

ScavTrap::ScavTrap(std::string _name): ClapTrap(_name)
{
	this->HP = 100;
	this->EP = 50;
	this->AD = 20;
	this->guarding_gate = false;
	std::cout << "ScavTrap constructed!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructed!" << std::endl;
}

void ScavTrap::attack(std::string const& target)
{
	if (this->EP > 0 && this->HP > 0)
	{
		std::cout << "SC4V-TP " << this->name << " attacks " << target <<  ", causing " << this->AD << " points of damage!" << std::endl;
		this->EP -= 1;
	}
	else if (this->HP <= 0)
		std::cout << "This SC4V-TP is already dead!" << std::endl;
	else
		std::cout << "Not enough energy!" << std::endl;
}

void ScavTrap::guardGate()
{
	if (this->guarding_gate == false && this->HP > 0)
	{
		std::cout << "ScavTrap is now in Gatekeeper mode!" << std::endl;
		this->guarding_gate = true;
	}
	else if (this->HP <= 0)
		std::cout << "ScavTrap is already dead" << std::endl;
	else
		std::cout << "ScavTrap is already guarding the gate!" << std::endl;
}
