/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 17:49:40 by ahamalai          #+#    #+#             */
/*   Updated: 2024/06/17 10:26:34 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::announce( void )
{
    std::cout << this->name << ": BraiiiiiiinnnzzZ..." << std::endl;
}

void	Zombie::setName(std::string _name)
{
	this->name = _name;
}

Zombie::Zombie(std::string _name) : name(_name)
{
    announce();
}

Zombie::Zombie(void)
{
	this->name = "(null)";
}

Zombie::~Zombie(void)
{
    std::cout << this->name << " was killed.\n";
}
