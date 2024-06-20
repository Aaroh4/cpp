/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 12:18:31 by ahamalai          #+#    #+#             */
/*   Updated: 2024/06/17 15:12:29 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanB_HPP
#define HumanB_HPP

#include "Weapon.hpp"

class HumanB
{
	public:
		void	attack();
		void	setName(std::string _name);
		void	setWeapon(Weapon &_weapon);
		const std::string	&getWeapon();
		HumanB(std::string _name);
		~HumanB(void);
	private:
		Weapon *weapon;
		std::string name = "HumanB";
};

#endif