
#include<string>
using namespace std;
#pragma once

class Dog
{
public:
	Dog();
	Dog(string name, double height, double weight, int age, string color);
	virtual ~Dog();
	virtual void read();
	virtual void print();
protected:
	string name;
	double height;
	double weight;
	int age;
	string color;
};

