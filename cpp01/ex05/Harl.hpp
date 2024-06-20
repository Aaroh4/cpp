/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 13:59:38 by ahamalai          #+#    #+#             */
/*   Updated: 2024/06/18 15:37:56 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl
{
	public:
		void complain( std::string level );
		Harl();
		~Harl();
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
};

typedef void (Harl::*func_point)(void);


#endif