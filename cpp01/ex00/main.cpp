/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 13:58:29 by ahamalai          #+#    #+#             */
/*   Updated: 2024/06/17 10:06:37 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

int main(void)
{
    Zombie	moizombie("Moi");
	Zombie	*hellozombie = newZombie("Hello");
	
	randomChump("Moi2");
	delete hellozombie;
	return (0);
}
