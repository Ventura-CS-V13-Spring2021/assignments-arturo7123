#pragma once
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "coordinate.hpp"

class Rectangle
{
private:
	Coordinate lb;
	Coordinate rt;
	Coordinate center;
	double area;
public:
	Rectangle();
	Rectangle(Coordinate lbval, Coordinate rtval);
	Coordinate getLB();
	Coordinate getRT();
	double getArea();
	Coordinate getCenter();
	void setLBRT(Coordinate lbval, Coordinate rtval);
	void printRectangle()const;

};


#endif // !RECTANGLE_H