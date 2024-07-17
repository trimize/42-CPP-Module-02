/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:13:34 by trimize           #+#    #+#             */
/*   Updated: 2024/07/17 19:20:16 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void)
{
	if (bsp(Point(0, 0), Point(10, 30), Point(20, 0), Point(5, 15)))
		std::cout << "Inside of the triangle" << std::endl;
	else
		std::cout << "Outside of the triangle !" << std::endl;
	return (0);
}
