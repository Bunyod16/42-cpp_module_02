#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed( void ) {
    std::cout << "Default consturctor called" << std::endl;
    this->fp = 0;
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;

    return (this->fp);
}

void Fixed::setRawBits( int const raw ) {
    std::cout << "setRawBits member function called" << std::endl;
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