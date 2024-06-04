/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchfunctions.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:47:47 by ahamalai          #+#    #+#             */
/*   Updated: 2024/06/03 17:20:08 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include <limits>

void	write_column(PhoneBook book, int column)
{
	int	i;

	i = 0;
	while(book.mycontacts[i].exists)
	{
		std::cout.flags(std::ios::right);
		std::cout.width (10);
		if (column == 1)
			std::cout << i;
		else if (column == 2)
			std::cout << book.mycontacts[i].fname;
		else if (column == 3)
			std::cout << book.mycontacts[i].lname;
		else if (column == 4)
			std::cout << book.mycontacts[i].nname;
		if (book.mycontacts[i + 1].exists)
				std::cout << "|";
		i++;
	}
	std::cout << "\n";
}

void	truncate(PhoneBook *book)
{
	int	i;

	i = 0;
	while (book->mycontacts[i].exists)
	{
		if (book->mycontacts[i].fname.length() > 10)	
		{
			book->mycontacts[i].fname.resize(9);
			book->mycontacts[i].fname += '.';
		}
		if (book->mycontacts[i].lname.length() > 10)	
		{
			book->mycontacts[i].lname.resize(9);
			book->mycontacts[i].lname += '.';
		}
		if (book->mycontacts[i].nname.length() > 10)	
		{
			book->mycontacts[i].nname.resize(9);
			book->mycontacts[i].nname += '.';
		}
		i++;
	}
}

void	find_index(PhoneBook *book)
{
	int			valid;
	int			iinput;
	std::string input;

	while (1)
	{
		std::cout << "Input index: ";
		std::cin >> input;
		try 
		{
			valid = 1;
			iinput = std::stoi(input);
		}
		catch (const std::exception& e)
		{
			valid = 0;
			std::cout << "Not a valid index\n";
			std::cin.clear();
		}
		if (valid && iinput < 8 && book->mycontacts[iinput].exists)
		{
			std::cout << "\nFirst name: " << book->mycontacts[iinput].fname << "\n";
			std::cout << "Last name: " << book->mycontacts[iinput].lname << "\n";
			std::cout << "Nickname: " << book->mycontacts[iinput].nname << "\n";
			std::cout << "Phonenumber: " << book->mycontacts[iinput].number << "\n";
			std::cout << "Darkest secret: " << book->mycontacts[iinput].secret << "\n\n";
			break ;
		}
		else if (valid)
		{
			std::cout << "Not a valid index\n";
			std::cin.clear();
		}
	}
}
