
#include "Point.h"
using namespace std;

class Rectangle : public Point
{
public: 
	Rectangle();
	Rectangle(double x, double y, double length, double width);
	~Rectangle();
	double area_rectangle(double length, double width);
	double perimeter_rectangle(double length, double width);
private:
	double length;
	double width;
};