/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:18:31 by ahamalai          #+#    #+#             */
/*   Updated: 2024/06/17 15:11:23 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	public:
		void	attack();
		void	setName(std::string _name);
		void	setWeapon(Weapon _weapon);
		const std::string	&getWeapon();
		HumanA(std::string _name, Weapon &_weapon);
		~HumanA(void);
	private:
		Weapon &weapon;
		std::string name = "HumanA";
};

#endif