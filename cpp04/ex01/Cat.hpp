/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 10:43:06 by ahamalai          #+#    #+#             */
/*   Updated: 2024/06/26 12:23:02 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	public:
		Cat();
		Cat(const Cat& input);
		~Cat();
		void makeSound() const;
	private:
		Brain* brain;
};

#endif