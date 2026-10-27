#include "Point.h"
#include <math.h>
#include <iostream>
using namespace std;

Point::Point(double x, double y)
{
	this->x = x;
	this->y = y;

}

Point::~Point()
{
}

bool Point::operator==(const Point& p) const
{
	if (this->x == p.x && this->y == p.y)
	{
		return true;
	}
	else return false;
}

bool Point::operator!=(const Point& p) const
{
	if (this->x == p.x && this->y == p.y)
	{
		return false;
	}
	else return true;
}

double Point::operator-(Point p)
{

	return sqrt(pow((p.x - this->x), 2) + pow((p.y - this->y), 2));
}

void Point::afficher() const
{
	cout << "x=" << this->x << "y=" << this->y << endl;
}
