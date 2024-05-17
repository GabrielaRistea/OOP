#include "Point.h"
#include<iostream>
using namespace std;

Point::Point()
{
	cout << "Default constructor Point " << endl;
	x = 0.0;
	y = 0.0;
}

Point::Point(double x, double y)
{
	cout << "General constructor Point " << endl;
	this->x = x;
	this->y = y;
}

Point::~Point()
{
	cout << "Destructor Point " << endl;
}

double Point::getX(double x)
{
	return this->x;
}

double Point::getY(double y)
{
	return this->y;
}