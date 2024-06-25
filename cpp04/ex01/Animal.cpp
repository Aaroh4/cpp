/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 11:33:34 by ahamalai          #+#    #+#             */
/*   Updated: 2024/06/25 12:59:21 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
}

Animal::~Animal()
{
}

void	Animal::makeSound() const
{
	if (this->type == "Cat")
		std::cout << "Meow" << std::endl;
	else if (this->type == "Dog")
		std::cout << "Bark" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}