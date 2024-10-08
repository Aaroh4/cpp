/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:04:22 by ahamalai          #+#    #+#             */
/*   Updated: 2024/08/29 14:28:57 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

class Form;

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
	public:
			Form();
			Form(std::string name, int gradeSign, int gradeExecute);
			Form(const Form& input);
			~Form();
			Form& operator=(const Form& input);

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

std::ostream&	operator<<(std::ostream &o, const Form& Form);


#endif