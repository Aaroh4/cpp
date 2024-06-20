/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 16:55:26 by ahamalai          #+#    #+#             */
/*   Updated: 2024/06/20 10:53:06 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


Point::Point(): x(0), y(0)
{
}

Point::Point(const float _x, const float _y): x(_x), y(_y)
{
}

Point::Point(const Point& other): x(other.x), y(other.y)
{
}

Point& Point::operator=(Point& other)
{
	return (other);
}

Point::~Point()
{	
}

const Fixed& Point::getX()const
{
	return (this->x);
}

const Fixed& Point::getY()const
{
	return (this->y);
}
