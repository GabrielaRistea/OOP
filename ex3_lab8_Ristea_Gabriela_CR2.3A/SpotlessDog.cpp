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

void SpotlessDog::read()
{
	Dog::read();
}

void SpotlessDog::print()
{
	Dog::print();
}