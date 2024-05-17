#pragma once
#include "Point.h"
using namespace std;

class Line : public Point
{
public:
	Line();
	Line(double x, double y, double x1, double y1);
	~Line();
private:
	double x1;
	double y1;
};

