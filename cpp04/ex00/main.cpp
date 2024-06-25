/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 12:53:28 by ahamalai          #+#    #+#             */
/*   Updated: 2024/06/25 14:38:58 by ahamalai         ###   ########.fr       */
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
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();

const WrongAnimal* Wrongi = new WrongCat();
const WrongAnimal* Wrongmeta = new WrongAnimal();
std::cout << Wrongi->getType() << " " << std::endl;
Wrongi->makeSound();
Wrongmeta->makeSound();

delete (meta);
delete (i);
delete (j);
delete (Wrongi);
delete (Wrongmeta);

return 0;
}