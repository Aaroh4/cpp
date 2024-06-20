/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 14:02:55 by ahamalai          #+#    #+#             */
/*   Updated: 2024/06/20 14:54:39 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap green("Green");
	ClapTrap yellow("Yellow");
	green.attack("Yellow");
	yellow.takeDamage(1);
	yellow.beRepaired(2);
	yellow.beRepaired(2);
	yellow.beRepaired(2);
	yellow.beRepaired(2);
	yellow.beRepaired(2);
	yellow.beRepaired(2);
	yellow.beRepaired(2);
	yellow.beRepaired(2);
	yellow.beRepaired(2);
	yellow.beRepaired(2);
	yellow.beRepaired(2);
}