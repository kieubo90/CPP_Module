/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvu <vvu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:43:08 by vvu               #+#    #+#             */
/*   Updated: 2023/12/19 14:59:10 by vvu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
	Fixed a;
	a.setOtherValue(20);
	Fixed b(a);
	Fixed c;
	
	c = a;
	
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	c.getSetBits(100);
	a.getSetBits(324);
	std::cout << "\nNew:\n" << a.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	return (0);
}