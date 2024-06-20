/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 09:44:00 by ahamalai          #+#    #+#             */
/*   Updated: 2024/06/17 10:40:42 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int	main(int argc, char **argv)
{
	Zombie		*horde;
	int			nbZombies;
	std::string	name = "zombie";

	if (argc == 1 || atoi(argv[1]) <= 0)
		nbZombies = 10;
	else
		nbZombies = atoi(argv[1]);
	if (argc >= 3)
		name = argv[2];
	
	horde = zombieHorde(nbZombies, name);

	for (int i = 0; i < nbZombies; i++)
		horde[i].announce();
	
	delete [] horde;
	std::cout << "The horde of " << nbZombies << " zombies has been eradicated." << std::endl;
	return (0);
}