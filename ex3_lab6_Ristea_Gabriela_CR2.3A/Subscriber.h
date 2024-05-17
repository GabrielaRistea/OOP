#pragma once
#include <string>
using namespace std;

class Subscriber
{
public:
	Subscriber() {};
	Subscriber(string name, string street, int number, string city, string phone_number);
	void read();
	friend class List;
private:
	struct Address
	{
		Address(string street, int number, string city);
		Address() {};
		string street; 
		int number;
		string city;
	};
	Address address;
	string phone_number;
	string name;
	Subscriber* next_subscriber;


};