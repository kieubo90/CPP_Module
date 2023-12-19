#include "Point.hpp"
#include "Fixed.hpp"

// Helper function to calculate the area of a triangle
Fixed triangleArea(const Point& p1, const Point& p2, const Point& p3) {
    Fixed area = (p1.getX() * (p2.getY() - p3.getY()) +
                 p2.getX() * (p3.getY() - p1.getY()) +
                 p3.getX() * (p1.getY() - p2.getY())) /
                Fixed(2.0f);
    return area;
}

// Function to check if a point is inside a triangle
bool isInsideTriangle(const Point& p, const Point& v1, const Point& v2, const Point& v3) {
    Fixed totalArea = triangleArea(v1, v2, v3);
    Fixed area1 = triangleArea(p, v2, v3);
    Fixed area2 = triangleArea(v1, p, v3);
    Fixed area3 = triangleArea(v1, v2, p);

    // Check if the sum of areas of sub-triangles is equal to the total area
    return totalArea == (area1 + area2 + area3);
}
