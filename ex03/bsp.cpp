/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:29:31 by trimize           #+#    #+#             */
/*   Updated: 2024/05/23 18:28:45 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed   abs(Fixed x) {
    if (x < 0)
        return x * -1;
    return x;
}

Fixed	area(Point const a, Point const b, Point const c)
{
	Fixed area;

	area = ((b.getX() - a.getX()) * (c.getY() - a.getY()) - (b.getY() - a.getY()) * (c.getX() - a.getX())) / 2;
	return (area);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed area_sum;
	Fixed triangle_area;

	triangle_area = abs(area(a, b, c));
	area_sum = area_sum + abs(area(a, b , point));
	area_sum = area_sum + abs(area(a, c , point));
	area_sum = area_sum + abs(area(b, c , point));
	if (triangle_area == area_sum)
		return (true);
	else
		return (false);
}