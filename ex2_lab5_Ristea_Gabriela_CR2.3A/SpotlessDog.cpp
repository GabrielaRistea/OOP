#include "SpotlessDog.h"
#include<iostream>


SpotlessDog::SpotlessDog()
{
	cout << "Default constructor SpotlessDog" << endl;
}

SpotlessDog::~SpotlessDog()
{
	cout << "Destructor SpotlessDog" << endl;
}

void SpotlessDog::read_SpotlessDog()
{
	Dog::read_dog_details();
}

void SpotlessDog::print_SpotlessDog()
{
	Dog::print_dog_details();
}