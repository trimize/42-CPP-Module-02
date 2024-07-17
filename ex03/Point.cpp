/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:04:34 by trimize           #+#    #+#             */
/*   Updated: 2024/05/23 18:18:19 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
	
}

Point::Point(const float a, const float b) : x(a), y(b)
{
	
}

Point::Point(const Point &p) : x(p.x), y(p.y)
{

}

Point& Point::operator=(const Point &p)
{
	if (this != &p)
	{
		(Fixed)this->x = p.getX();
		(Fixed)this->y = p.getY();
	}
	return (*this);
}

Point::~Point()
{

}

Fixed	Point::getX(void) const
{
	return(this->x);
}

Fixed	Point::getY(void) const
{
	return(this->y);
}
