/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 10:50:54 by ahamalai          #+#    #+#             */
/*   Updated: 2024/06/26 13:45:31 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << "\n";
		return (0);
	}
	i = 1;
	while (argv[i] != NULL)
	{
		std::string str(argv[i]);
		for (auto & c: str) c = toupper(c);
		std::cout << str << " ";
		i++;
	}
	std::cout << "\n";
	return (0);
}
