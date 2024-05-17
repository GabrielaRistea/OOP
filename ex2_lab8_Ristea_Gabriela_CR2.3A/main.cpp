#include "Point.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include <iostream>
using namespace std;

int main()
{

	Circle circle1(1,1,2);
	Rectangle rectangle1(1, 1, 6, 4);
	Square square1(1, 1, 4);

	Point* p1 = &circle1;
	Point* p2 = &rectangle1;
	Point* p3 = &square1;

	cout << "The perimeter of the circle: " << p1->calculatePerimeter() << endl;
	cout << "The perimeter of the rectangle: " << p2->calculatePerimeter() << endl;
	cout << "The perimeter of the square: " << p3->calculatePerimeter() << endl;


	return 0;

}