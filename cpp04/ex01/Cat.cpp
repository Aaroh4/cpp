/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 11:39:37 by ahamalai          #+#    #+#             */
/*   Updated: 2024/06/26 12:26:07 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->brain = new Brain();
	std::cout << "Cat contructed" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat& input)
{
	this->brain = new Brain(*input.brain);	
}

Cat::~Cat()
{
	delete (this->brain);
	std::cout << "Cat destructed" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}