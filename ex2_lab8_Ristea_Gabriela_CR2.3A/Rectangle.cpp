#include "Point.h"
#include "Rectangle.h"
#include<iostream>
using namespace std;

Rectangle::Rectangle()
{
	cout << "Default constructor Rectangle " << endl;
	length = 0.0;
	width = 0.0;
}

Rectangle::Rectangle(double x, double y, double length, double width)
{
	cout << "General constructor Rectangle " << endl;
	this->length = length;
	this->width = width;
}

Rectangle::~Rectangle()
{
	cout << "Destructor Rectangle " << endl;
}


double Rectangle::calculatePerimeter()
{
	return 2 * (length + width);
}