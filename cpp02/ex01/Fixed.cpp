/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 10:27:09 by ahamalai          #+#    #+#             */
/*   Updated: 2024/06/19 13:57:08 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->setRawBits(0);
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(other.getRawBits());
}

Fixed::Fixed(const int input)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(input << fractbits);
}

Fixed::Fixed(const float input)
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits((int)roundf(input * (1 << this->fractbits)));
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
        this->setRawBits(other.getRawBits());
    }
    return *this;
}

float Fixed::toFloat( void ) const
{
	return((float)this->getRawBits() / (1 << this->fractbits));
}

int Fixed::toInt( void ) const
{
	return(int(this->getRawBits() >> this->fractbits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
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