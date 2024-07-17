/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:13:42 by trimize           #+#    #+#             */
/*   Updated: 2024/07/17 19:18:39 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fixed_p = 0;
}

Fixed::Fixed(const Fixed &fxd)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fxd;
}

Fixed& Fixed::operator=(const Fixed &fxd)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fxd)
		this->fixed_p = fxd.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixed_p = raw;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_p);
}
