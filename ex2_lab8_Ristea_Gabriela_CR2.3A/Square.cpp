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
}

Square::~Square()
{
	cout << "Destructor Square " << endl;
}


double Square::calculatePerimeter()
{
	return 4 * side;
}