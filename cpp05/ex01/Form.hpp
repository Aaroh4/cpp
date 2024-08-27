/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:04:22 by ahamalai          #+#    #+#             */
/*   Updated: 2024/08/27 15:25:36 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>

class Form
{
	public:
			Form();
			Form(const Form& input);
			~Form();
			Form& operator=(const Form& input);

			std::string getName(void) const;
			bool		getSigned(void) const;
			int			getGradeSign(void) const;
			int			getGradeExecute(void) const;
	private:
			const		std::string _name;
			bool		_signed;
			const int	_gradeSign;
			const int	_gradeExecute;
};

#endif