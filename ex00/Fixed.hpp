/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trimize <trimize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:12:36 by trimize           #+#    #+#             */
/*   Updated: 2024/05/23 15:25:43 by trimize          ###   ########.fr       */
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
		Fixed(const Fixed &fxd);
		Fixed &operator=(const Fixed &fxd);
		~Fixed();
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif