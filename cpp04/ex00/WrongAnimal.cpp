/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 11:33:34 by ahamalai          #+#    #+#             */
/*   Updated: 2024/06/25 13:04:36 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
}

WrongAnimal::~WrongAnimal()
{
}

void	WrongAnimal::makeSound() const
{
	if (this->type == "WrongCat")
		std::cout << "WrongMeow" << std::endl;
	else if (this->type == "WrongDog")
		std::cout << "WrongBark" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}