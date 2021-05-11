#pragma once
#ifndef COORDINATE_H
#define COORDINATE_H
#include <iostream>
using namespace std;

class Coordinate
{
private:
	double x;
	double y;
public:
	Coordinate();
	Coordinate(double xval, double yval);
	double getX()const;
	double getY()const;
	void setXY(double xval, double yval);
	void printXY()const;
};


#endif