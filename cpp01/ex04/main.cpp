/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 15:13:37 by ahamalai          #+#    #+#             */
/*   Updated: 2024/06/18 13:41:12 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

std::string own_replace(int first, std::string line, std::string s1, std::string s2)
{
	line.erase(first, s1.length());
	line.insert(first, s2);
	return (line);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Wrong amount of arguments \n";
		return (1);
	}
	std::ifstream myfile;
	myfile.open(argv[1]);
	std::string line;
	int	lastone;
	if (myfile.is_open())
  	{
		std::ofstream outfile (std::string(argv[1]) += ".replaced");
    	while (std::getline(myfile, line))
     	{
			lastone = 0;
			while ((lastone = line.find(argv[2], lastone)) != std::string::npos)
			{
				line = own_replace(lastone, line, argv[2], argv[3]);
				lastone += std::string(argv[3]).length();
			}
			outfile << line << std::endl;
		}
		myfile.close();
		outfile.close();
  	}
	else
		std::cerr << "Could not open the file \n";
}