#include "List.h"
#include <iostream>
using namespace std;

List::List():first_subscriber(nullptr)
{}

void List::add_subscriber(const Subscriber& subscriber1)
{
	if (!first_subscriber)
	{
		first_subscriber = new Subscriber (subscriber1);
	}
	else
	{
		Subscriber* temp = first_subscriber->next_subscriber;
		Subscriber* previous_subscriber = first_subscriber;
		while (temp)
		{
			previous_subscriber = temp;
			temp = temp->next_subscriber;
		}
		previous_subscriber->next_subscriber = new Subscriber(subscriber1);
	}
}

void List::search_subscriber(string name) const
{
	Subscriber* temp = first_subscriber;
	while (temp)
	{
		if (temp->name == name)
		{
			cout << "Subscriber name: " << temp->name << endl;
			cout << "Address: " << temp->address.city << ", " << temp->address.street << ", " << temp->address.number << endl;
			cout << "Phone number: " << temp->phone_number << endl;
			return;
		}
		temp = temp->next_subscriber;
	}
	cout << "Not found!" << endl;
}

void List::print_number(string name) const
{
	Subscriber* temp = first_subscriber;
	while (temp)
	{
		if (temp->name == name)
		{
			cout << "Telephone number of the subscriber " << name << " is " << temp->phone_number << endl;
			return;
		}
		temp = temp->next_subscriber;
	}
	cout << "Not found!" << endl;
}

void List::print_list()
{
	Subscriber* temp = first_subscriber;
	int no = 1;
	while (temp)
	{
		cout << "Name subscriber " << no << ": " << temp->name << endl;
		cout << "Address: " << temp->address.city << ", " << temp->address.street << ", " << temp->address.number << endl;
		cout << "Phone number: " << temp->phone_number << endl;
		cout << endl;
		no++;
		temp = temp->next_subscriber;
	}
}