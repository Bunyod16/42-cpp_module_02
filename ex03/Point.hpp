#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include <string>
# include "Fixed.hpp"

class Point
{
	public:
		// Constructors
		Point();
		Point(float x, float y);
		Point(const Point &copy);
		
		// Destructor
		~Point();
		
		// Operators
		Point & operator=(const Point &assign);
		
		float getX() const;
		float getY() const;
		bool operator!=(const Point &point) const;

	private:
		const Fixed _x;
		const Fixed _y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif