/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:57:25 by trimize           #+#    #+#             */
/*   Updated: 2024/05/23 18:07:56 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		const Fixed	x;
		const Fixed	y;

	public:
		Point();
		Point(const float a, const float b);
		Point(const Point &p);
		Point &operator = (const Point &p);
		Fixed	getX(void) const;
		Fixed	getY(void) const;
		void	setX(Fixed x);
		void	setY(Fixed y);
		~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif