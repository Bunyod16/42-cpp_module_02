#include <iostream>
#include <cmath>
#include "Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    Fixed c(10);
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, c ) << std::endl;
    std::cout << Fixed::min(a, c) << std::endl;
    return 0;
}