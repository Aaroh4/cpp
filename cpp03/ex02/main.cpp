/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 14:02:55 by ahamalai          #+#    #+#             */
/*   Updated: 2024/06/24 14:38:58 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap green("Green");
	FragTrap yellow("Yellow");
	ScavTrap red("Red");
	green.attack("Yellow");
	yellow.attack("Red");
	yellow.highFivesGuys();
	red.attack("Green");
	red.guardGate();
	red.takeDamage(99);
	red.takeDamage(1);
	red.takeDamage(1);
}