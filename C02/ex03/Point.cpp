#include "Point.hpp"

Point::Point(void) : x(0), y(0)
{
}

Point::Point(const float nx, const float ny) : x(nx), y(ny)
{
    return ;
}

Point::Point(Point const & cpy)
{
    *this = cpy;
	return ;
}

Point::~Point(void)
{
}


Point & Point::operator=(Point const & rhs)
{
    (void)rhs;
    return (*this);
}

Fixed const Point::getFixedX() const
{
    return (this->x);
}

Fixed const Point::getFixedY() const
{
    return (this->y);
}
