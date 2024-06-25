/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 12:53:28 by ahamalai          #+#    #+#             */
/*   Updated: 2024/06/25 16:43:48 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << "\n\n" << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();

std::cout << "\n" << std::endl;
const WrongAnimal* Wrongi = new WrongCat();
std::cout << "\n\n" << Wrongi->getType() << " " << std::endl;
Wrongi->makeSound();
std::cout << "\n" << std::endl;

delete (meta);
delete (i);
delete (j);
delete (Wrongi);

return 0;
}