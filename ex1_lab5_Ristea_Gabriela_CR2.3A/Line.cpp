#include "Line.h"
#include "Point.h"
#include<iostream>
#include<cmath>
using namespace std;

Line::Line() : Point(0.0, 0.0), x1(0.0), y1(0.0)
{
	cout << "Default constructor Line " << endl;
}

Line::Line(double x, double y, double x1, double y1) : Point(x, y), x1(x1), y1(y1)
{
	cout << "General constructor Line " << endl;
}

Line::~Line()
{
	cout << "Destructor Line " << endl;
}

double Line::distance(double x, double y, double x1, double y1)
{
	return sqrt(pow(x - x1, 2) + pow(y - y1, 2));
}

