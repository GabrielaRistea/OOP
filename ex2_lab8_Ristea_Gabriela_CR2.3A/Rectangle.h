
#include "Point.h"
using namespace std;

class Rectangle : public Point
{
public:
	Rectangle();
	Rectangle(double x, double y, double length, double width);
	~Rectangle();
	double calculatePerimeter();
private:
	double length;
	double width;
};
