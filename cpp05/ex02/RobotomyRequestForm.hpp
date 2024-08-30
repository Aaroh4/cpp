/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    RobotomyRequestForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 14:57:16 by ahamalai          #+#    #+#             */
/*   Updated: 2024/08/29 15:10:16 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <fstream>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	public:
			RobotomyRequestForm();
			RobotomyRequestForm(std::string target);
			~RobotomyRequestForm();
			RobotomyRequestForm(const RobotomyRequestForm& input);
			RobotomyRequestForm& operator=(const RobotomyRequestForm& input);

			void executeFormAction(void) const;
	private:
			std::string	_target;	
};

#endif