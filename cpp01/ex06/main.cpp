/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 13:46:53 by ahamalai          #+#    #+#             */
/*   Updated: 2024/06/18 16:20:53 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	Harl newharl;
	
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i = 0;
	while (std::string(argv[1]) != levels[i] && i < 4)
		i++;
	switch (i)
	{
		case 0:
			newharl.complain("DEBUG");
		case 1:
			newharl.complain("INFO");
		case 2:
			newharl.complain("WARNING");
		case 3:
			newharl.complain("ERROR");
			break ;
		case 4:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
