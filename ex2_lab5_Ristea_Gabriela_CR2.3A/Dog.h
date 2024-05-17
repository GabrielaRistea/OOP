
#include<string>
using namespace std;
#pragma once

class Dog
{
public:
	Dog();
	Dog(string name, double height, double weight, int age, string color);
	~Dog();
	void read_dog_details();
	void print_dog_details();
protected:
	string name;
	double height;
	double weight;
	int age;
	string color;
};
