#include "coordinate.h"


Coordinate::Coordinate()
{
	x = 0;
	y = 0;
}
Coordinate::Coordinate(double xval, double yval)
{
	x = xval;
	y = yval;
}
double Coordinate::getX()const
{
	return x;
}
double Coordinate::getY()const
{
	return y;
}
void Coordinate::setXY(double xval, double yval)
{
	x = xval;
	y = yval;
}
void Coordinate::printXY()const
{
	cout << "X-Coordinate: " << x << endl;
	cout << "Y-Coordinate: " << y << endl;
}
