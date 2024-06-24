/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 11:48:35 by ahamalai          #+#    #+#             */
/*   Updated: 2024/06/24 13:23:49 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->mycontacts[0].set_exists(false);
	this->mycontacts[1].set_exists(false);
	this->mycontacts[2].set_exists(false);
	this->mycontacts[3].set_exists(false);
	this->mycontacts[4].set_exists(false);
	this->mycontacts[5].set_exists(false);
	this->mycontacts[6].set_exists(false);
	this->mycontacts[7].set_exists(false);
}

PhoneBook::~PhoneBook()
{
	
}

Contact& PhoneBook::getcontact(int num)
{
	return (this->mycontacts[num % 8]);
}