#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed {
private:
    int fixedPointValue;
    static const int fractionalBits;
public:
    Fixed();
    Fixed(const int rawValue);
    Fixed(const float floatValue);
    Fixed(const Fixed& other);
    ~Fixed();

    // Arithmetic operators
    Fixed operator+(const Fixed& other) const;
    Fixed operator-(const Fixed& other) const;
    Fixed operator*(const Fixed& other) const;
    Fixed operator/(const Fixed& other) const;

    // Comparison operators
    bool operator>(const Fixed& other) const;
    bool operator<(const Fixed& other) const;
    bool operator>=(const Fixed& other) const;
    bool operator<=(const Fixed& other) const;
    bool operator==(const Fixed& other) const;
    bool operator!=(const Fixed& other) const;

    // Increment and decrement operators
    Fixed& operator++(); // Pre-increment
    Fixed operator++(int); // Post-increment
    Fixed& operator--(); // Pre-decrement
    Fixed operator--(int); // Post-decrement

    // Static member functions
    static const Fixed& min(const Fixed& a, const Fixed& b);
    static Fixed& min(Fixed& a, Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);
    static Fixed& max(Fixed& a, Fixed& b);

    // Conversion functions
    int toInt() const;
    float toFloat() const;

    // Friend function for output stream
};
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif // FIXED_H
