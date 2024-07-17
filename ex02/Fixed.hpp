/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:12:36 by trimize           #+#    #+#             */
/*   Updated: 2024/05/23 16:51:31 by trimize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		std::string name;
		int	fixed_p;
		static const int nb_fract_bits = 8;

	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &fxd);

		bool	operator > (const Fixed &fxd);
		bool	operator < (const Fixed &fxd);
		bool	operator >= (const Fixed &fxd);
		bool	operator <= (const Fixed &fxd);
		bool	operator == (const Fixed &fxd);
		bool	operator != (const Fixed &fxd);

		Fixed operator + (const Fixed &fxd);
		Fixed operator - (const Fixed &fxd);
		Fixed operator * (const Fixed &fxd);
		Fixed operator / (const Fixed &fxd);
		Fixed &operator = (const Fixed &fxd);

		Fixed &operator ++ (void);
		Fixed operator ++ (int);
		Fixed &operator -- (void);
		Fixed operator -- (int);
		
		static	Fixed &min(Fixed &a, Fixed &b);
		static const	Fixed &min(const Fixed &a, const Fixed &b);
		static	Fixed &max(Fixed &a, Fixed &b);
		static const	Fixed &max(const Fixed &a, const Fixed &b);

		~Fixed();

		int	getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int	toInt(void) const;
};

std::ostream & operator << (std::ostream & o, Fixed const & fxd);

#endif