#include "Fixed.hpp"

const int Fixed::fractionalBits = 8;

Fixed::Fixed() : fixedPointValue(0) {}

Fixed::Fixed(const int rawValue) : fixedPointValue(rawValue << fractionalBits) {}

Fixed::Fixed(const float floatValue) : fixedPointValue(roundf(floatValue * (1 << fractionalBits))) {}

Fixed::Fixed(const Fixed& other) : fixedPointValue(other.fixedPointValue) {}

Fixed::~Fixed() {}

Fixed Fixed::operator+(const Fixed& other) const {
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const {
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const {
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const {
    return Fixed(this->toFloat() / other.toFloat());
}

bool Fixed::operator>(const Fixed& other) const {
    return this->fixedPointValue > other.fixedPointValue;
}

bool Fixed::operator<(const Fixed& other) const {
    return this->fixedPointValue < other.fixedPointValue;
}

bool Fixed::operator>=(const Fixed& other) const {
    return this->fixedPointValue >= other.fixedPointValue;
}

bool Fixed::operator<=(const Fixed& other) const {
    return this->fixedPointValue <= other.fixedPointValue;
}

bool Fixed::operator==(const Fixed& other) const {
    return this->fixedPointValue == other.fixedPointValue;
}

bool Fixed::operator!=(const Fixed& other) const {
    return this->fixedPointValue != other.fixedPointValue;
}

Fixed& Fixed::operator++() {
    ++this->fixedPointValue;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp(*this);
    ++(*this);
    return temp;
}

Fixed& Fixed::operator--() {
    --this->fixedPointValue;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed temp(*this);
    --(*this);
    return temp;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    return (a < b) ? a : b;
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
    return (a < b) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
    return (a > b) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
    return (a > b) ? a : b;
}

int Fixed::toInt() const {
    return fixedPointValue >> fractionalBits;
}

float Fixed::toFloat() const {
    return static_cast<float>(fixedPointValue) / static_cast<float>(1 << fractionalBits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}
