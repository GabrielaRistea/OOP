#include "SpottyDog.h"
#include<iostream>
using namespace std;

SpottyDog::SpottyDog()
{
	cout << "Default constructor SpottyDog" << endl;
	no_spots = 0;
}

SpottyDog::SpottyDog(string name, double height, double weight, int age, string color, int no_spots)
{
	cout << "General constructor SpottyDog" << endl;
	this->no_spots = no_spots;
}

SpottyDog::~SpottyDog()
{
	cout << "Destructor SpottyDog" << endl;
}

void SpottyDog::read_SpottyDog()
{
	Dog::read_dog_details();
	cout << "Enter the number of spots: " << endl;
	cin >> this->no_spots;
	cin.get();
}

void SpottyDog::print_SpottyDog()
{
	Dog::print_dog_details();
	cout << "Number of spots: " << this->no_spots << endl;
}