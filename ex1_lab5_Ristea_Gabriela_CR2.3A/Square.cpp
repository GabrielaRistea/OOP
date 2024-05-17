#include "Point.h"
#include "Square.h"
#include<iostream>
using namespace std;

Square::Square()
{
	cout << "Default contructor Square " << endl;
	side = 0.0;
}

Square::Square(double x, double y, double side)
{
	cout << "General constructor Square " << endl;
	this->side = side;
	this->x = x;
	this->y = y;
}

Square::~Square()
{
	cout << "Destructor Square " << endl;
}

double Square::area_square(double side)
{
	return side * side;
}

double Square::perimeter_square(double side)
{
	return 4 * side;
}