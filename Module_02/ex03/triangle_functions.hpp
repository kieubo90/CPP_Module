
#ifndef TRIANGLE_FUNCTIONS_HPP
#define TRIANGLE_FUNCTIONS_HPP

#include "Point.hpp"

// Declaration of the triangleArea function
Fixed triangleArea(const Point& p1, const Point& p2, const Point& p3);

// Declaration of the isInsideTriangle function
bool isInsideTriangle(const Point& p, const Point& v1, const Point& v2, const Point& v3);

#endif // TRIANGLE_FUNCTIONS_HPP
