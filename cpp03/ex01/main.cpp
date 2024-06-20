/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 14:02:55 by ahamalai          #+#    #+#             */
/*   Updated: 2024/06/20 15:20:11 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap green("Green");
	ClapTrap yellow("Yellow");
	ScavTrap red("Red");
	green.attack("Yellow");
	red.attack("Green");
	red.guardGate();
	red.takeDamage(99);
	red.takeDamage(1);
	red.takeDamage(1);
}