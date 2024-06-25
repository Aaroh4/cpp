/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 11:41:03 by ahamalai          #+#    #+#             */
/*   Updated: 2024/06/25 17:17:30 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->brain = new Brain();
	std::cout << "Dog contructed" << std::endl;
	this->type = "Dog";
}

Dog::~Dog()
{
	delete (this->brain);
	std::cout << "Dog destructed" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Bark" << std::endl;
}