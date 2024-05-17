
#include "Point.h"
using namespace std;

class Square : public Point
{
public:
	Square();
	Square(double x, double y, double side);
	~Square();
	double calculatePerimeter();
private:
	double side;
};