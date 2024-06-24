/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 14:02:55 by ahamalai          #+#    #+#             */
/*   Updated: 2024/06/24 16:12:12 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	//ClapTrap green("Green");
	DiamondTrap blue("Blue");
	
	blue.takeDamage(2);
	blue.takeDamage(2);
	blue.takeDamage(2);
	blue.takeDamage(2);
	blue.takeDamage(2);
	blue.takeDamage(2);
	blue.takeDamage(2);
	blue.takeDamage(2);
	blue.takeDamage(2);
	blue.takeDamage(2);
	blue.takeDamage(2);
	blue.takeDamage(2);
	blue.takeDamage(2);
	blue.takeDamage(2);
	blue.takeDamage(2);
	blue.takeDamage(2);
	blue.takeDamage(2);
	blue.attack("Green");
	blue.whoAmI();
}