#include "Dog.h"
#include <iostream>
#include<string>
using namespace std;

Dog::Dog()
{
	cout << "Default constructor Dog" << endl;
	name = "";
	height = 0.0;
	weight = 0.0;
	age = 0;
	color = "";
}

Dog::Dog(string name, double height, double weight, int age, string color)
{
	cout << "General constructor Dog" << endl;
	this->name = name;
	this->height = height;
	this->weight = weight;
	this->age = age;
	this->color = color;
}

Dog::~Dog()
{
	cout << "Destructor Dog" << endl;
}

void Dog::read()
{
	cout << "Enter the name: " << endl;
	getline(cin, this->name);
	cout << "Enter the height: " << endl;
	cin >> this->height;
	cout << "Enter the weight: " << endl;
	cin >> this->weight;
	cout << "Enter the age: " << endl;
	cin >> this->age;
	cin.get();
	cout << "Enter the color: " << endl;
	getline(cin, this->color);

}

void Dog::print()
{
	cout << "Name: " << this->name << endl;
	cout << "Height: " << this->height << endl;
	cout << "Weight: " << this->weight << endl;
	cout << "Age: " << this->age << endl;
	cout << "Color: " << this->color << endl;
}

