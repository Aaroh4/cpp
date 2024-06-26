/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 11:31:18 by ahamalai          #+#    #+#             */
/*   Updated: 2024/06/26 11:14:31 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
	public:
		Animal();
		Animal(const Animal& input);
		virtual ~Animal();
		virtual void	makeSound() const;
		std::string getType() const;
	protected:
		std::string type;		
};

#endif