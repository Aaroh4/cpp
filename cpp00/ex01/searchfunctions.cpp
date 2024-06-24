/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchfunctions.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:47:47 by ahamalai          #+#    #+#             */
/*   Updated: 2024/06/24 13:31:20 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include <limits>

PhoneBook	truncate(PhoneBook book)
{
	int	i;

	i = 0;
	while (book.getcontact(i).get_exists())
	{
		if (book.getcontact(i).get_fname().length() > 10)	
		{
			book.getcontact(i).resize_fname(9);
			book.getcontact(i).set_fname(book.getcontact(i).get_fname() += '.');
		}
		if (book.getcontact(i).get_lname().length() > 10)	
		{
			book.getcontact(i).resize_lname(9);
			book.getcontact(i).set_lname(book.getcontact(i).get_lname() += '.');
		}
		if (book.getcontact(i).get_nname().length() > 10)	
		{
			book.getcontact(i).resize_nname(9);
			book.getcontact(i).set_nname(book.getcontact(i).get_nname() += '.');
		}
		i++;
	}
	return (book);
}

void	write_column(PhoneBook book, int column)
{
	int	i;

	i = 0;
	book = truncate(book);
	while(book.getcontact(i).get_exists())
	{
		std::cout.flags(std::ios::right);
		std::cout.width (10);
		if (column == 1)
			std::cout << i;
		else if (column == 2)
			std::cout << book.getcontact(i).get_fname();
		else if (column == 3)
			std::cout << book.getcontact(i).get_lname();
		else if (column == 4)
			std::cout << book.getcontact(i).get_nname();
		if (book.getcontact(i + 1).get_exists())
				std::cout << "|";
		i++;
	}
	std::cout << "\n";
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
		if (valid && iinput < 8 && book->getcontact(iinput).get_exists())
		{
			std::cout << "\nFirst name: " << book->getcontact(iinput).get_fname() << "\n";
			std::cout << "Last name: " << book->getcontact(iinput).get_lname() << "\n";
			std::cout << "Nickname: " << book->getcontact(iinput).get_nname() << "\n";
			std::cout << "Phonenumber: " << book->getcontact(iinput).get_number() << "\n";
			std::cout << "Darkest secret: " << book->getcontact(iinput).get_secret() << "\n\n";
			break ;
		}
		else if (valid)
		{
			std::cout << "Not a valid index\n";
			std::cin.clear();
		}
	}
}
