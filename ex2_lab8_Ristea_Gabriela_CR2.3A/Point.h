#pragma once
using namespace std;

class Point
{
public:
	Point();
	Point(double x, double y);
	virtual ~Point();
	virtual double calculatePerimeter();
protected:
	double x;
	double y;
};
