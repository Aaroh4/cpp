/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    Intern.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 14:57:16 by ahamalai          #+#    #+#             */
/*   Updated: 2024/08/29 15:10:16 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <fstream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
	public:
			Intern();
			Intern(std::string target);
			~Intern();
			Intern(const Intern& input);
			Intern& operator=(const Intern& input);
			AForm *makeForm(std::string name, std::string target);
	private:
};

#endif