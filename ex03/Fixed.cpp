/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:13:42 by trimize           #+#    #+#             */
/*   Updated: 2024/05/23 17:59:13 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	this->fixed_p = 0;
}

Fixed::Fixed(const int value)
{
	this->fixed_p = value << this->nb_fract_bits;
}

Fixed::Fixed(const float value)
{
	this->fixed_p = roundf(value * (1 << this->nb_fract_bits));
}

Fixed::Fixed(const Fixed &fxd)
{
	*this = fxd;
}

Fixed& Fixed::operator=(const Fixed &fxd)
{
	if (this != &fxd)
		this->fixed_p = fxd.fixed_p;
	return (*this);
}

Fixed::~Fixed()
{
}

void	Fixed::setRawBits(int const raw)
{
	this->fixed_p = raw;
}

int	Fixed::getRawBits(void) const
{
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

bool	Fixed::operator > (const Fixed &fxd)
{
	return (this->getRawBits() > fxd.getRawBits());
}

bool	Fixed::operator < (const Fixed &fxd)
{
	return (this->getRawBits() < fxd.getRawBits());
}

bool	Fixed::operator >= (const Fixed &fxd)
{
	return (this->getRawBits() >= fxd.getRawBits());
}

bool	Fixed::operator <= (const Fixed &fxd)
{
	return (this->getRawBits() <= fxd.getRawBits());
}

bool	Fixed::operator == (const Fixed &fxd)
{
	return (this->getRawBits() == fxd.getRawBits());
}

bool	Fixed::operator != (const Fixed &fxd)
{
	return (this->getRawBits() != fxd.getRawBits());
}

Fixed	Fixed::operator + (const Fixed &fxd)
{
	return (this->toFloat() + fxd.toFloat());
}

Fixed	Fixed::operator - (const Fixed &fxd)
{
	return (this->toFloat() - fxd.toFloat());
}

Fixed	Fixed::operator * (const Fixed &fxd)
{
	return (this->toFloat() * fxd.toFloat());
}

Fixed	Fixed::operator / (const Fixed &fxd)
{
	return (this->toFloat() / fxd.toFloat());
}

Fixed	&Fixed::operator ++ (void)
{
	return (++this->fixed_p, *this);
}

Fixed	Fixed::operator ++ (int)
{
	Fixed	tmp(*this);

	tmp.fixed_p = this->fixed_p++;
	return (tmp);
}

Fixed	&Fixed::operator -- (void)
{
	return (--this->fixed_p, *this);
}

Fixed	Fixed::operator -- (int)
{
	Fixed	tmp(*this);

	tmp.fixed_p = this->fixed_p--;
	return (tmp);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}