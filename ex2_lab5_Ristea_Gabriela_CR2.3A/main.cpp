#include "SpottyDog.h"
#include "SpotlessDog.h"
#include<iostream>
using namespace std;

int main()
{
	SpottyDog spotty_dog;
	SpotlessDog dog;
	cout << "Enter the spotty dog details: " << endl;
	spotty_dog.read_SpottyDog();
	cout << "Print the spotty dog details: " << endl;
	spotty_dog.print_SpottyDog();
	cout << endl;
	cout << "Enter the spotless dog details: " << endl;
	dog.read_SpotlessDog();
	cout << "Print the spotless dog details: " << endl;
	dog.print_SpotlessDog();
	return 0;
}