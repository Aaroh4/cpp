/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 10:43:06 by ahamalai          #+#    #+#             */
/*   Updated: 2024/06/26 12:22:42 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	public:
		Dog();
		Dog(const Dog& input);
		~Dog();
		void makeSound() const;
	private:
		Brain* brain;
};

#endif