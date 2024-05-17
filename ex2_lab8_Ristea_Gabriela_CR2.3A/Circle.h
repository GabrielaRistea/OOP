
#include "Point.h"
using namespace std;

class Circle : public Point
{
public:
	Circle();
	Circle(double x, double y, double radius);
	~Circle();
	double calculatePerimeter();

private:
	double radius;
};
