/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvu <vvu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:06:11 by vvu               #+#    #+#             */
/*   Updated: 2023/12/11 13:30:55 by vvu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		static const int	_fractionalBites;
		int					_value;
	public:
		Fixed();
		Fixed(const Fixed &other);
		Fixed(const int integer);
		Fixed(const float floating);
		Fixed &operator=(const Fixed &other);
		~Fixed();
		
		float	toFloat() const;
		int		toInt() const;
		int		getRawBits(void)const;
		void	setRawBits(int const new_value);
		int		printValue() const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);