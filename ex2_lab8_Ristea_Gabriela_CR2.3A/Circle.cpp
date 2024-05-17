#include "Circle.h"
#include "Point.h"
#include<iostream>
using namespace std;

Circle::Circle()
{
	cout << "Default constructor Circle " << endl;
	radius = 0.0;
}

Circle::Circle(double x, double y, double radius)
{
	cout << "General constructor Circle " << endl;
	this->radius = radius;
}

Circle::~Circle()
{
	cout << "Destructor Circle " << endl;
}

double Circle::calculatePerimeter()
{
	return 2 * 3.14 * radius;
}