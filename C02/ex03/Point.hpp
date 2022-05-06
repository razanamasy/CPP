#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include <cmath>

#include "Fixed.hpp"

class Point {

	public : 
    Point(void);
    Point(const float nx, const float ny);
    Point(Point const & cpy);
    ~Point(void);

    Fixed const getFixedX() const;
    Fixed const getFixedY() const;

    Point & operator=(Point const & rhs);

	private :
		Fixed const x;
        Fixed const y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif