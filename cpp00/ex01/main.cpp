/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 15:36:37 by ahamalai          #+#    #+#             */
/*   Updated: 2024/06/03 17:22:53 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include <limits>

void	write_column(PhoneBook book, int column);
void	truncate(PhoneBook *book);
void	find_index(PhoneBook *book);

void	addloop(PhoneBook *book)
{
	static int i;
	std::string input;
	int	iinput;
	int	valid;
	
	valid = 0;
	if (i == 8)
		i = 0;
	std::cout << "Enter first name: ";
	std::cin >> input;
	book->mycontacts[i].fname = input;
	std::cout << "Enter last name: ";
	std::cin >> input;
	book->mycontacts[i].lname = input;
	std::cout << "Enter nickname: ";
	std::cin >> input;
	book->mycontacts[i].nname = input;
	while (1)
	{
		std::cout << "phone number: ";
		std::cin >> input;
		try 
		{
			valid = 1;
			iinput = std::stoi(input);
		}
		catch (const std::exception& e)
		{
			valid = 0;
			std::cout << "Not a valid Phonenumber\n";
			std::cin.clear();
		}
		if (valid && iinput > 0)
		{
			book->mycontacts[i].number = iinput;
			break ;
		}
		else if (valid)
		{
			std::cout << "Not a valid Phonenumber\n";
			std::cin.clear();
		}
	}
	std::cout << "Tell me your darkest secret: ";
	std::cin >> input;
	book->mycontacts[i].secret = input;
	book->mycontacts[i].exists = true;
	i++;
}

void	searchloop(PhoneBook *book)
{
	int	i;

	i = 0;
	if (!book->mycontacts[0].exists)
	{
		std::cout << "EMPTY!" << "\n";
		return ;
	}
	truncate(book);
	write_column(*book, 1);
	write_column(*book, 2);
	write_column(*book, 3);
	write_column(*book, 4);
	find_index(book);
}

void	initialize_bool(PhoneBook *book)
{
	book->mycontacts[0].exists = false;
	book->mycontacts[1].exists = false;
	book->mycontacts[2].exists = false;
	book->mycontacts[3].exists = false;
	book->mycontacts[4].exists = false;
	book->mycontacts[5].exists = false;
	book->mycontacts[6].exists = false;
	book->mycontacts[7].exists = false;
}

int	main(void)
{
	PhoneBook book;
	std::string input;

	initialize_bool(&book);
	while (1)
	{
		std::cout << "Enter a command: ADD, SEARCH, EXIT\n";
		std::cout << "Input: ";
		std::cin >> input;
		if (input == "EXIT")
			exit (0);
		else if (input == "ADD")
			addloop(&book);
		else if (input == "SEARCH")
			searchloop(&book);
	}	
	return (0);
}
