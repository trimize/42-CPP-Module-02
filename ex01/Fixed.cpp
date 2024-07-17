/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:13:42 by trimize           #+#    #+#             */
/*   Updated: 2024/07/17 19:19:02 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fixed_p = 0;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixed_p = value << this->nb_fract_bits;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixed_p = roundf(value * (1 << this->nb_fract_bits));
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
		this->fixed_p = fxd.fixed_p;
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

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->fixed_p) / (1 << this->nb_fract_bits));
}

int	Fixed::toInt(void) const
{
	return this->fixed_p >> this->nb_fract_bits;
}

std::ostream & operator << (std::ostream & o, Fixed const & fxd)
{
	o << fxd.toFloat();
	return (o);
}
