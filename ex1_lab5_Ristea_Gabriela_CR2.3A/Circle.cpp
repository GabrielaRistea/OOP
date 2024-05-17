#include "Circle.h"
#include "Point.h"
#include<iostream>
using namespace std;

Circle::Circle()
{
	cout << "Default constructor Circle " << endl;
	x = 0.0;
	y = 0.0;
	radius = 0.0;
}

Circle::Circle(double x, double y, double radius)
{
	cout << "General constructor Circle " << endl;
	this->x = x;
	this->y = y;
	this->radius = radius;
}

Circle::~Circle()
{
	cout << "Destructor Circle " << endl;
}

double Circle::area_circle(double radius)
{
	return 3.14 * radius * radius;
}

double Circle::perimeter_circle(double radius)
{
	return 2 * 3.14 * radius;
}