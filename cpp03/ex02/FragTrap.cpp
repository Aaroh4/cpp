/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 14:23:25 by ahamalai          #+#    #+#             */
/*   Updated: 2024/06/20 15:45:42 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("", 100, 100, 30)
{
	this->guarding_gate = false;
	std::cout << "FragTrap constructed!" << std::endl;
}

FragTrap::FragTrap(std::string _name): ClapTrap(_name, 100, 100, 30)
{
	this->guarding_gate = false;
	std::cout << "FragTrap constructed!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructed!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Fragtrap High five!" << std::endl;
}
