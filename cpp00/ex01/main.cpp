/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 15:36:37 by ahamalai          #+#    #+#             */
/*   Updated: 2024/06/24 13:31:00 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include <limits>

void	write_column(PhoneBook book, int column);
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
	book->getcontact(i).set_fname(input);
	std::cout << "Enter last name: ";
	std::cin >> input;
	book->getcontact(i).set_lname(input);
	std::cout << "Enter nickname: ";
	std::cin >> input;
	book->getcontact(i).set_nname(input);
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
			book->getcontact(i).set_number(iinput);
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
	book->getcontact(i).set_secret(input);
	book->getcontact(i).set_exists(true);
	i++;
}

void	searchloop(PhoneBook *book)
{
	int	i;

	i = 0;
	if (!book->getcontact(0).get_exists())
	{
		std::cout << "EMPTY!" << "\n";
		return ;
	}
	write_column(*book, 1);
	write_column(*book, 2);
	write_column(*book, 3);
	write_column(*book, 4);
	find_index(book);
}

int	main(void)
{
	PhoneBook book;
	std::string input;

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
