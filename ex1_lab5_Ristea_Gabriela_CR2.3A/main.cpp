#include "Point.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include <iostream>
using namespace std;

int main()
{
	Circle circle;
	double r, x, y;
	Rectangle rectangle;
	double length, width;
	Square square;
	double side;
	cout << "Enter the coordinates: ";
	cin >> x >> y;
	cout << endl;
	cout << "Enter the radius of the circle: ";
	cin  >> r;
	cout << "The area and the perimeter of the circle: " << circle.area_circle(r)<<" "<< circle.perimeter_circle(r) << endl;
	
	
	
	cout << "Enter the length and the width of the rectangle: ";
	cin >> length >> width;
	cout << "The area and the perimeter of the rectangle: "<< rectangle.area_rectangle(length, width)<<" "<< rectangle.perimeter_rectangle(length, width) << endl;
	
	
	cout << "Enter the side of the square: ";
	cin >> side;
	cout << "The area and the perimeter of the square: "<< square.area_square(side) <<" "<< square.perimeter_square(side) << endl;
	
	
	return 0;

}