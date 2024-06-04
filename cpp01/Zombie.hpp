/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 17:50:06 by ahamalai          #+#    #+#             */
/*   Updated: 2024/06/03 18:15:36 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{

public:
	void announce( void );
	Zombie(std::string name);
	~Zombie();
private:
	std::string name;
};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

#endif