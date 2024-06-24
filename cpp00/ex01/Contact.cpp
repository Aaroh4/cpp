/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 12:04:37 by ahamalai          #+#    #+#             */
/*   Updated: 2024/06/24 13:07:29 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	
}

Contact::~Contact()
{
	
}

std::string Contact::get_fname(void) const
{
	return (this->fname);
}

std::string Contact::get_lname(void) const
{
	return (this->lname);
}

std::string Contact::get_nname(void) const
{
	return (this->nname);
}

std::string Contact::get_secret(void) const
{
	return (this->secret);
}

int			Contact::get_number(void) const
{
	return (this->number);
}

bool		Contact::get_exists(void) const
{
	return (this->exists);
}

void 		Contact::set_fname(std::string input)
{
	this->fname = input;
}

void		Contact::set_lname(std::string input)
{
	this->lname = input;
}

void		Contact::set_nname(std::string input)
{
	this->nname = input;
}

void		Contact::set_secret(std::string input)
{
	this->secret = input;
}

void		Contact::set_number(int input)
{
	this->number = input;
}

void		Contact::set_exists(bool input)
{
	this->exists = input;
}

void		Contact::resize_fname(int size)
{
	this->fname.resize(size);
}

void		Contact::resize_lname(int size)
{
	this->lname.resize(size);
}

void		Contact::resize_nname(int size)
{
	this->nname.resize(size);
}
