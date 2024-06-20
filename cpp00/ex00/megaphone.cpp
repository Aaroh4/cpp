/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 10:50:54 by ahamalai          #+#    #+#             */
/*   Updated: 2024/06/17 09:45:47 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argv[1] == NULL)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << "\n";
		return (0);
	}
	for (i = 1; argv[i] != NULL; ++i)
		for (j = 0; j < argv[i][j] != '\0'; ++j)
			if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
				argv[i][j] = argv[i][j] - 32;
	i = 1;
	while (argv[i] != NULL)
	{
		std::cout << argv[i] << " ";
		i++;
	}
	std::cout << "\n";
	return (0);
}
