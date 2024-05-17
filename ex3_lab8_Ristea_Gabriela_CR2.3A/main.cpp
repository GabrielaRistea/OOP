#include "SpottyDog.h"
#include "SpotlessDog.h"
#include<iostream>
using namespace std;

int main()
{
	/*SpottyDog spotty_dog;
	SpotlessDog dog;
	cout << "Enter the spotty dog details: " << endl;
	spotty_dog.read();
	cout << "Print the spotty dog details: " << endl;
	spotty_dog.print();
	cout << endl;
	cout << "Enter the spotless dog details: " << endl;
	dog.read();
	cout << "Print the spotless dog details: " << endl;
	dog.print();*/

	SpottyDog dog1;
	SpotlessDog dog2;
	Dog* d1 = &dog1;
	Dog* d2 = &dog2;
	
	cout << "Enter the spotty dog details: " << endl;
	d1->read();
	cout << "Print the spotty dog details: " << endl;
	d1->print();
	cout << endl;
	cout << "Enter the spotless dog details: " << endl;
	d2->read();
	cout << "Print the spotless dog details: " << endl;
	d2->print();


	return 0;
}