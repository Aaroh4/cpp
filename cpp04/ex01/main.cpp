/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 12:53:28 by ahamalai          #+#    #+#             */
/*   Updated: 2024/06/26 12:44:45 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
const Animal* j = new Dog();
const Animal* i = new Cat();
delete j;//should not create a leak
//delete i;

const Animal* newi;

newi = i;

std::cout << newi->getType() << std::endl;
return 0;
}