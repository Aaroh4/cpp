/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 11:33:34 by ahamalai          #+#    #+#             */
/*   Updated: 2024/06/26 11:14:34 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal contructed" << std::endl;
}

Animal::Animal(const Animal& input)
{
	this->type = input.getType();	
}

Animal::~Animal()
{
	std::cout << "Animal destructed" << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << "Animal noises" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}