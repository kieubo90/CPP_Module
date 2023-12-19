/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvu <vvu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:06:47 by vvu               #+#    #+#             */
/*   Updated: 2023/12/19 13:50:01 by vvu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractionalBites = 8;

Fixed::Fixed() : _value(0)
{
	std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(const int integer) : _value(integer << _fractionalBites) 
{
	std::cout << "Int Constructor called" << std::endl;
}

Fixed::Fixed(const float floating) : _value(static_cast<int>(std::roundf(floating * (1 << _fractionalBites)))) 
{
	std::cout << "Float Constructor called" << std::endl;
}

// Fixed::Fixed(const float floating) : _value(floating * (1 << _fractionalBites))
// {
// 	std::cout << "Float Constructor called" << std::endl;
// }

Fixed::Fixed(const Fixed &other) : _value(other._value)
{
	std::cout << "Copy Constructor called" << std::endl;
	std::cout << "Copy assignment operator called" << std::endl;

}

Fixed::~Fixed()
{
	std::cout << "Deconstructor called" << std::endl;
}


int	Fixed::toInt() const
{
	return (_value >> _fractionalBites);
}

float Fixed::toFloat() const
{
	return static_cast<float>(_value) / (1 << _fractionalBites);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void	Fixed::setRawBits(int const new_value)
{
	std::cout << "setRawBits memeber function called" << std::endl;
	this->_value = new_value;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return os;
}

Fixed& Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_value = other._value;
	}
	return *this;
}

int	Fixed::printValue() const
{
	return (_value);
}