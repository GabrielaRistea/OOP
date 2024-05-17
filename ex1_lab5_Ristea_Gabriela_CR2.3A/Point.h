#pragma once
using namespace std;

class Point
{
public:
	Point();
	Point(double x, double y);
	~Point();
	double getX(double x);
	double getY(double y);
protected:
	double x;
	double y;
};