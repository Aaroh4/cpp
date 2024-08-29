/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    PresidentialPardonForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 14:57:16 by ahamalai          #+#    #+#             */
/*   Updated: 2024/08/29 15:10:16 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <fstream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:
			PresidentialPardonForm();
			PresidentialPardonForm(std::string target);
			~PresidentialPardonForm();
			PresidentialPardonForm(const PresidentialPardonForm& input);
			PresidentialPardonForm& operator=(const PresidentialPardonForm& input);

			void executeFormAction( void ) const;
	private:
			std::string	_target;	
};

#endif