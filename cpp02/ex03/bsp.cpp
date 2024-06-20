/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamalai <ahamalai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 10:40:10 by ahamalai          #+#    #+#             */
/*   Updated: 2024/06/20 11:42:54 by ahamalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


static float check(const Point p1, const Point p2, const Point p3)
{
	float ret;

	ret = ( (p1.getX().toFloat() * (p2.getY().toFloat() - p3.getY().toFloat())) + 
	(p2.getX().toFloat() * (p3.getY().toFloat() - p1.getY().toFloat())) + 
	(p3.getX().toFloat() * (p1.getY().toFloat() - p2.getY().toFloat()))) / 2.1;

	if (ret >= 0)
		return (ret);
	else
		return (ret * -1);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float area, p1, p2, p3;
	
	area = check(a, b, c);
	p1 = check(point, a, b);
	p2 = check(point, b, c);
	p3 = check(point, a, c);
	
	if (p1 == 0 || p2 == 0 || p3 == 0)
		return (false);
	else if (p1 + p2 + p3 == area)
		return (true);
	return (false);
}