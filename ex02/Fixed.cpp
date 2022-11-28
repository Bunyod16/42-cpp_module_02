#include <iostream>
#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed( void ) {
    this->fp = 0;
}

int Fixed::getRawBits( void ) const {
    return (this->fp);
}

void Fixed::setRawBits( int const raw ) {
    this->fp = raw;
}

Fixed &Fixed::operator=(const Fixed &r) {
    this->fp = r.getRawBits();
    return *this;
}

Fixed::Fixed(const Fixed &obj) {
    *this = obj;
}

Fixed::~Fixed(void) {
}

Fixed::Fixed( const int raw ) {
    this->fp = raw << this->fracbit;
}

Fixed::Fixed( const float raw ) {
    this->fp = roundf(raw * (1 << this->fracbit));
}

float Fixed::toFloat( void ) const {
    return (float(this->fp) / (1 << this->fracbit));
}

int Fixed::toInt( void ) const {
    return (int(this->fp) / (1 << this->fracbit));
}

std::ostream    &operator<<(std::ostream &output, const Fixed &f) {
    output << f.toFloat();
    return output;
}

bool Fixed::operator==(const Fixed &fixed) const {
    return (fp == fixed.fp);
}

bool Fixed::operator!=(const Fixed &fixed) const {
    return (fp != fixed.fp);
}

bool Fixed::operator>(const Fixed &fixed) const {
    return (fp > fixed.fp);
}

bool Fixed::operator>=(const Fixed &fixed) const {
    return (fp >= fixed.fp);
}

bool Fixed::operator<(const Fixed &fixed) const {
    return (fp < fixed.fp);
}

bool Fixed::operator<=(const Fixed &fixed) const {
    return (fp <= fixed.fp);
}

Fixed Fixed::operator+(const Fixed &fixed) {
    return (this->toFloat() + fixed.toFloat());
}

Fixed Fixed::operator-(const Fixed &fixed) {
    return (this->toFloat() - fixed.toFloat());
}

Fixed Fixed::operator*(const Fixed &fixed) {
    return (Fixed(this->toFloat() * fixed.toFloat()));
}

Fixed Fixed::operator/(const Fixed &fixed) {
    return (Fixed(this->toFloat() / fixed.toFloat()));
}

Fixed Fixed::operator++() {
    this->fp += 1;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp = *this;
    this->fp += 1;
    return (temp);
}

Fixed   &Fixed::min(Fixed &a, Fixed &b) {
    if (a < b)
        return a;
    return b;
}

const Fixed   &Fixed::min(const Fixed &a, const Fixed &b) {
    if (a < b)
        return a;
    return b;
}

Fixed   &Fixed::max(Fixed &a, Fixed &b) {
    if (a > b)
        return a;
    return b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
    if (a > b)
        return (a);
    return b;
}