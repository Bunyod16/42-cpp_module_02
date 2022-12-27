#include <iostream>
#include "Point.hpp"

float area(Point const a, Point const b, Point const c)
{
   return abs((a.getX()*(b.getY()-c.getY()) + b.getX()*(c.getY()-a.getY())+ c.getX()*(a.getY()-b.getY()))/2.0);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float A = area (a, b, c);
  
    /* Calculate area of triangle PBC */ 
    float A1 = area (a, b, point);

    /* Calculate area of triangle PAC */ 
    float A2 = area (a, c, point);

    /* Calculate area of triangle PAB */  
    float A3 = area (c, b, point);
    
    /* Check if sum of A1, A2 and A3 is same as A */
    if (A == A1 + A2 + A3 &&
        a != point &&
        b != point &&
        c != point)
        return true;
    return false;
}