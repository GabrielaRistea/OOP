#include "Subscriber.h"
#include <iostream>

Subscriber::Subscriber(string name, string street, int number, string city, string phone_number) :
	address(street, number, city), name(name), phone_number(phone_number), next_subscriber(nullptr)
{

}

Subscriber::Address::Address(string street, int number, string city)
{
	this->street = street;
	this->number = number;
	this->city = city;
}

void Subscriber::read()
{
	cout << "Name: ";
	getline(cin, this->name);
	cout << "Steet: ";
	getline(cin, this->address.street);
	cout << "Number: ";
	cin >> this->address.number;
	cin.get();
	cout << "City: ";
	getline(cin, this->address.city);
	cout << "Telephone number: ";
	getline(cin, this->phone_number);
}
