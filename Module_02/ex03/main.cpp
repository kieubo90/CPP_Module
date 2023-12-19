/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvu <vvu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 10:46:53 by vvu               #+#    #+#             */
/*   Updated: 2023/11/18 11:13:59 by vvu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

int main() {
    Point p(2.0f, 2.0f);
    Point v1(1.0f, 1.0f);
    Point v2(3.0f, 1.0f);
    Point v3(2.0f, 3.0f);

    if (isInsideTriangle(p, v1, v2, v3)) {
        std::cout << "Point is inside the triangle." << std::endl;
    } else {
        std::cout << "Point is outside the triangle." << std::endl;
    }

    return 0;
}
