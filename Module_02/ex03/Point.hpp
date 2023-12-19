/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvu <vvu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 10:43:44 by vvu               #+#    #+#             */
/*   Updated: 2023/11/18 10:46:13 by vvu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {
private:
    Fixed x;
    Fixed y;

public:
    Point();
    Point(const Fixed& xValue, const Fixed& yValue);
    Point(const Point& other);
    ~Point();

    Fixed getX() const;
    Fixed getY() const;
};

#endif
