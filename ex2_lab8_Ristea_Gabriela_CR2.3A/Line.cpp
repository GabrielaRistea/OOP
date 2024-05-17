#include "Line.h"
#include "Point.h"
#include<iostream>
#include<cmath>
using namespace std;

Line::Line() : x1(0.0), y1(0.0)
{
	cout << "Default constructor Line " << endl;
}

Line::Line(double x, double y, double x1, double y1) :  x1(x1), y1(y1)
{
	cout << "General constructor Line " << endl;
}

Line::~Line()
{
	cout << "Destructor Line " << endl;
}



