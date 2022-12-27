#include <iostream>
#include <cmath>
#include "Point.hpp"

int main( void ) {
    {
        const Point a(0.0f, 0.0f);
        const Point b(20.0f, 0.0f);
        const Point c(0.0f, 30.0f);
        const Point p(5.0f, 5.0f);

        std::cout << bsp(a, b, c, p) << std::endl;
    }

    {
        const Point g(0.0f, 0.0f);
        const Point h(-20.0f, 20.0f);
        const Point t(20.0f, 20.0f);
        const Point k(5.0f, 5.0f);

        std::cout << bsp(g, h, t, k) << std::endl;
    }

    {
        const Point a(0.0f, 0.0f);
        const Point b(20.0f, 0.0f);
        const Point c(10.0f, 30.0f);
        const Point p(0.0f, 00.0f);

        std::cout << bsp(a, b, c, p) << std::endl;
    }
    return 0;
}