/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:04:52 by ahamalai          #+#    #+#             */
/*   Updated: 2024/08/27 15:04:53 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("None"), _signed(false), _gradeSign(5), _gradeExecute(50)
{
}

Form::Form(std::string name, int gradeSign, int gradeExecute): _name("None"), _signed(false), _gradeSign(gradeSign), _gradeExecute(gradeExecute)
{
    
}

Form::~Form()
{
}