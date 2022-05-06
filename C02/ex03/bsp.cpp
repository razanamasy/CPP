#include "Point.hpp"

Fixed   getSlope(Point const & pointLine1, Point const & pointLine2)
{
    Fixed slope;

    slope = (pointLine1.getFixedY() - pointLine2.getFixedY()) / (pointLine1.getFixedX() - pointLine2.getFixedX());
    return (slope);
}

Fixed   getTransConst(Point const & pointLine1, Fixed slope)
{
    Fixed transConst;

    transConst = pointLine1.getFixedY() - (slope * pointLine1.getFixedX());
    return (transConst);
}

bool inRightPlan(Point const & pointLine1, Point const & pointLine2, Point const & lastPoint, Point const & toCheck)
{
    Fixed slope;
    Fixed transConst;
    Fixed resLastPoint;
    Fixed resToCheck;
    
    slope = getSlope(pointLine1, pointLine2);
    transConst = getTransConst(pointLine1, slope);
    resLastPoint = (slope * lastPoint.getFixedX()) + transConst - lastPoint.getFixedY();
    resToCheck = (slope * toCheck.getFixedX()) + transConst - toCheck.getFixedY();
    if (resToCheck == 0 || resLastPoint == 0)
        return (0);
    else if ((slope == 1.f / 0.f || slope == -1.f / 0.f) && (toCheck.getFixedX() == pointLine1.getFixedX()) )
        return (0);
    return ((resLastPoint<0) == (resToCheck<0));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{

    if (inRightPlan(a, b, c, point) && inRightPlan(b, c, a, point) && inRightPlan(c, a, b, point))
    {
        std::cout << "it's in the triangle" << std::endl;
        return (1);
    }
    else
    {  
        std::cout << "it's not in the triangle" << std::endl;
        return (0);
    }
   
}
