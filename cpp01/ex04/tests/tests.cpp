/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 13:33:22 by ahamalai          #+#    #+#             */
/*   Updated: 2024/06/18 13:42:19 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <sstream>
#include <fstream>

int main(void)
{
	std::stringstream sstream;
	sstream << "../loser " << "../main.cpp" << " a " << "test";
	system(sstream.str().c_str());
}
