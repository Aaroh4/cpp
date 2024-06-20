/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 10:45:08 by ahamalai          #+#    #+#             */
/*   Updated: 2024/06/17 10:54:04 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << &brain << "\n";
	std::cout << &stringPTR << "\n";
	std::cout << &stringREF << "\n";

	std::cout << brain << "\n";
	std::cout << stringPTR << "\n";
	std::cout << stringREF << "\n";
}