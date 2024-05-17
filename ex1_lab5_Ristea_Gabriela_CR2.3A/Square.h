
#include "Point.h"
using namespace std;

class Square : public Point
{
public:
	Square();
	Square(double x, double y, double side);
	~Square();
	double area_square(double side);
	double perimeter_square(double side);
private:
	double side;
};