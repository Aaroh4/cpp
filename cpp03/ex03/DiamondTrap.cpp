/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 09:41:18 by ahamalai          #+#    #+#             */
/*   Updated: 2024/06/24 16:11:45 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(): ClapTrap("empty_clap_name")
{
	this->name = "empty";
	this->HP = FragTrap::HP;
	this->EP = ScavTrap::EP;
	this->AD = FragTrap::AD;
	std::cout << "DiamondTrap constructed!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string inputname): ClapTrap(inputname + "_clap_name")
{
	this->name = inputname;
	this->HP = FragTrap::HP;
	this->EP = ScavTrap::EP;
	this->AD = FragTrap::AD;
	std::cout << "DiamondTrap constructed!" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructed!" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "Claptrap name: " << ClapTrap::name << std::endl;
	std::cout << "Real name: " << this->name << std::endl;
}