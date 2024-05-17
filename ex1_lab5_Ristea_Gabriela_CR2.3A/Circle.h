
#include "Point.h"
using namespace std;

class Circle : public Point
{
public:
	Circle();
	Circle(double x, double y, double radius);
	~Circle();
	double area_circle(double radius);
	double perimeter_circle(double radius);

private:
	double radius;
};