/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvu <vvu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 10:44:17 by vvu               #+#    #+#             */
/*   Updated: 2023/11/18 11:09:37 by vvu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const Fixed& xValue, const Fixed& yValue) : x(xValue), y(yValue) {}

Point::Point(const Point& other) : x(other.x), y(other.y) {}

Point::~Point() {}

Fixed Point::getX() const {
    return x;
}

Fixed Point::getY() const {
    return y;
}
