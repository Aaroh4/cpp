/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 16:41:03 by ahamalai          #+#    #+#             */
/*   Updated: 2024/06/19 12:56:58 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP;
#define FIXED_HPP;

class Fixed
{
	public:
		Fixed();
		Fixed(Fixed& other);
		Fixed& operator=(Fixed& other);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
	private:
		int	fixedp;
		static const int fractbits = 8;
};

#endif