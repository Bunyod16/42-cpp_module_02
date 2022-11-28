#include <iostream>
#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed( void ) {
    std::cout << "Default consturctor called" << std::endl;
    this->fp = 0;
}

int Fixed::getRawBits( void ) const {
    return (this->fp);
}

void Fixed::setRawBits( int const raw ) {
    this->fp = raw;
}

Fixed &Fixed::operator=(const Fixed &r) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->fp = r.getRawBits();
    return *this;
}

Fixed::Fixed(const Fixed &obj) {
    std::cout << "Copy constructor operator called" << std::endl;
    *this = obj;
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( const int raw ) {
    std::cout << "Int constructor called" << std::endl;
    this->fp = raw << this->fracbit;
}

Fixed::Fixed( const float raw ) {
    std::cout << "Float constructor called" << std::endl;
    this->fp = roundf(raw * (1 << this->fracbit));
}

float Fixed::toFloat( void ) const {
    return (float(this->fp) / (1 << this->fracbit));
}

int Fixed::toInt( void ) const {
    return (int(this->fp) / (1 << this->fracbit));
}

std::ostream &operator<<(std::ostream &output, const Fixed &f) {
    output << f.toFloat();
    return output;
}