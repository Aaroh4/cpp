/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 10:27:09 by ahamalai          #+#    #+#             */
/*   Updated: 2024/06/19 16:34:25 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	this->setRawBits(0);
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed& other)
{
	this->setRawBits(other.getRawBits());
}

Fixed::Fixed(const int input)
{
	this->setRawBits(input << fractbits);
}

Fixed::Fixed(const float input)
{
	this->setRawBits((int)roundf(input * (1 << this->fractbits)));
}

// ----------------------------------------------------------------------//

Fixed& Fixed::operator=(const Fixed& other)
{
	if (this != &other) {
        this->setRawBits(other.getRawBits());
    }
    return (*this);
}

Fixed Fixed::operator+(const Fixed& other)
{
    Fixed newfix(this->toFloat() + other.toFloat());
    return (newfix);
}

Fixed Fixed::operator-(const Fixed& other)
{
    Fixed newfix(this->toFloat() - other.toFloat());
    return (newfix);
}

Fixed Fixed::operator*(const Fixed& other)
{
    Fixed newfix(this->toFloat() * other.toFloat());
    return (newfix);
}

Fixed Fixed::operator/(const Fixed& other)
{
    Fixed newfix(this->toFloat() / other.toFloat());
    return (newfix);
}
// ----------------------------------------------------------------------//

	Fixed& Fixed::operator++(void)
	{
		this->fixedp += 1;
		return (*this);
	}
	
	Fixed Fixed::operator++(int)
	{
		Fixed tmp = *this;
		this->fixedp += 1;
		return (tmp);
	}

	Fixed& Fixed::operator--(void)
	{
		this->fixedp -= 1;
		return (*this);
	}
	
	Fixed Fixed::operator--(int)
	{
		Fixed tmp = *this;
		this->fixedp -= 1;
		return (tmp);
	}

// ----------------------------------------------------------------------//

int Fixed::operator>(const Fixed& other)
{
	if (this->toFloat() > other.toFloat())
		return (1);
	return (0);
}

int Fixed::operator<(const Fixed& other)
{
	if (this->toFloat() < other.toFloat())
		return (1);
	return (0);
}

int Fixed::operator>=(const Fixed& other)
{
	if (this->toFloat() >= other.toFloat())
		return (1);
	return (0);
}

int Fixed::operator<=(const Fixed& other)
{
	if (this->toFloat() <= other.toFloat())
		return (1);
	return (0);
}

int Fixed::operator==(const Fixed& other)
{
	if (this->toFloat() == other.toFloat())
		return (1);
	return (0);
}

int Fixed::operator!=(const Fixed& other)
{
	if (this->toFloat() != other.toFloat())
		return (1);
	return (0);
}

// ----------------------------------------------------------------------//

	Fixed& Fixed::min(Fixed& first, Fixed& second)
	{
		if (first.toFloat() < second.toFloat())
			return (first);
		return (second);
	}
	
	const Fixed& Fixed::min(const Fixed& first, const Fixed& second)
	{
		if (first.toFloat() < second.toFloat())
			return (first);
		return (second);
	}
	
	Fixed& Fixed::max(Fixed& first, Fixed& second)
	{
		if (first.toFloat() > second.toFloat())
			return (first);
		return (second);
	}
	
	const Fixed& Fixed::max(const Fixed& first, const Fixed& second)
	{
		if (first.toFloat() > second.toFloat())
			return (first);
		return (second);
	}

// ----------------------------------------------------------------------//

float Fixed::toFloat( void ) const
{
	return((float)this->getRawBits() / (1 << this->fractbits));
}

int Fixed::toInt( void ) const
{
	return(int(this->getRawBits() >> this->fractbits));
}

int Fixed::getRawBits( void ) const
{
	return (this->fixedp);
}

void Fixed::setRawBits( int const raw )
{
	this->fixedp = raw;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}
