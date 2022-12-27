#include "Point.hpp"

// Constructors
Point::Point() : _x(0), _y(0)
{
}

Point::Point(float x, float y) : _x(x), _y(y)
{
}

Point::Point(const Point &copy) : _x(copy.getX()), _y(copy.getY())
{
}


// Destructor
Point::~Point()
{
}


// Operators
Point & Point::operator=(const Point &assign)
{
	(void) assign;
	return *this;
}

float Point::getX() const
{
	return _x.toFloat();
}

float Point::getY() const
{
	return _y.toFloat();
}

bool Point::operator!=(const Point &point) const {
    return (this->getX() != point.getX() && this->getY() != point.getY());
}