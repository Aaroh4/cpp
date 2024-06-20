/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 16:41:03 by ahamalai          #+#    #+#             */
/*   Updated: 2024/06/19 16:31:06 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(const int input);
		Fixed(const float input);
		Fixed(const Fixed& other);

		Fixed& operator=(const Fixed& other);
		Fixed operator+(const Fixed& other);
		Fixed operator-(const Fixed& other);
		Fixed operator*(const Fixed& other);
		Fixed operator/(const Fixed& other);

		Fixed& operator++(void);
		Fixed operator++(int value);
		Fixed& operator--(void);
		Fixed operator--(int value);

		int operator>(const Fixed& other);
		int operator<(const Fixed& other);
		int operator>=(const Fixed& other);
		int operator<=(const Fixed& other);
		int operator==(const Fixed& other);
		int operator!=(const Fixed& other);
		
		static Fixed& min(Fixed& first, Fixed& second);
		static const Fixed& min(const Fixed& first, const Fixed& second);
		static Fixed& max(Fixed& first, Fixed& second);
		static const Fixed& max(const Fixed& first, const Fixed& second);

		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
	private:
		int	fixedp;
		static const int fractbits = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif