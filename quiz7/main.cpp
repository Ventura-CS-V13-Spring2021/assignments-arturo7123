#include "rectangle.hpp"
#include "coordinate.hpp"

int main()
{

	Coordinate lbval(5.0, 5.0);
	Coordinate rtval(10.0, 10.0);
	Rectangle r1(lbval, rtval);
	
  r1.printRectangle();

	lbval.setXY(0.0, 0.0);
	rtval.setXY(20.0, 20.0);
	r1.setLBRT(lbval, rtval);
	r1.printRectangle();
	
	return 0;
}