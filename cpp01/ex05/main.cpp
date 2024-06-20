/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 13:46:53 by ahamalai          #+#    #+#             */
/*   Updated: 2024/06/18 15:48:39 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl newharl;

	newharl.complain("DEBUG");
	newharl.complain("INFO");
	newharl.complain("WARNING");
	newharl.complain("ERROR");
	newharl.complain("FAKE");
}