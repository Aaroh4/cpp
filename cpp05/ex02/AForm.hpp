/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:04:22 by ahamalai          #+#    #+#             */
/*   Updated: 2024/08/29 14:28:57 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

class AForm;

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class AForm
{
	public:
			AForm();
			AForm(std::string name, int gradeSign, int gradeExecute);
			AForm(const AForm& input);
			virtual ~AForm();
			AForm& operator=(const AForm& input);

			std::string getName(void) const;
			bool		getSigned(void) const;
			int			getGradeSign(void) const;
			int			getGradeExecute(void) const;
			void		beSigned(Bureaucrat &);
			class 				GradeTooHighException: public std::exception
			{
				public:
				    	const char *what() const throw();

			};
			class 				GradeTooLowException: public std::exception
			{
				public:
						const char *what() const throw();
			};
	private:
			const		std::string _name;
			bool		_signed;
			const int	_gradeSign;
			const int	_gradeExecute;
};

std::ostream&	operator<<(std::ostream &o, const AForm& AForm);


#endif