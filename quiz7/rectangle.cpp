#include "rectangle.h"

Rectangle::Rectangle()
{
	area = 0.0;
}
Rectangle::Rectangle(Coordinate lbval, Coordinate rtval)
{
	lb = lbval;
	rt = rtval;
	area = 0;
}
Coordinate Rectangle::getLB()
{
	return lb;
}
Coordinate Rectangle::getRT()
{
	return rt;
}
double Rectangle::getArea()
{
	return area;
}
Coordinate Rectangle::getCenter()
{
	return center;
}
void Rectangle::setLBRT(Coordinate lbval, Coordinate rtval)
{
	double centerX, centerY;
	lb = lbval;
	rt = rtval;
	centerX = lb.getX() + ((rt.getX() - lb.getX()) / 2.0);
	centerY = lb.getY() + ((rt.getY() - lb.getY()) / 2.0);
	center.setXY(centerX, centerY);
	area = (rt.getX() - lb.getX()) * (rt.getY() - lb.getY());
}
void Rectangle::printRectangle()const
{
	cout << "Left Bottom Coordinates: " << lb.getX() << "," << lb.getY() << endl;
	cout << "Right Top Coordinates: " << rt.getX() << "," << rt.getY() << endl;
	cout << "Center Coordinates: " << center.getX() << "," << center.getY() << endl;
	cout << "Area: "<<area<< endl << endl;;
}
