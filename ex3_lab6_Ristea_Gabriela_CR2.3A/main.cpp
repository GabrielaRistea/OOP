#include "Subscriber.h"
#include "List.h"
#include <iostream>

int main()
{
	List create_list;
	Subscriber new_subscriber;
	string searched_name;
	int option;

	Subscriber sub1("Maria", "Str Int Muzeului", 2, "Caracal", "076555998");
	create_list.add_subscriber(sub1);

	Subscriber sub2("Ion", "Str Lalelelor", 23, "Slatina", "032555789");
	create_list.add_subscriber(sub2);

	Subscriber sub3("Ana", "Str Carpati", 121, "Caracal", "072111345");
	create_list.add_subscriber(sub3);

	Subscriber sub4("Mihai", "Str Caracal", 27, "Craiova", "078912345");
	create_list.add_subscriber(sub4);

	do
	{
		cout << endl << "1 Add new subscribers in the list";
		cout << endl << "2 Print the list";
		cout << endl << "3 Search a subscriber by the name";
		cout << endl << "4 Print the phone number of the searched subscriber";
		cout << endl << "5 Exit";
		cout << endl << endl << "Enter an option:";
		cin >> option;
		cin.get();
		switch (option)
		{
		case 1:
			new_subscriber.read();
			create_list.add_subscriber(new_subscriber);
			break;
		case 2:
			create_list.print_list();
			break;
		case 3:
			cout << "The name of the searched subscriber: ";
			getline(cin, searched_name);
			create_list.search_subscriber(searched_name);
			break;
		case 4:
			cout << "The name of the subscriber whose phone number you are looking for: ";
			getline(cin, searched_name);
			create_list.print_number(searched_name);
			break;
		case 5:
			exit(0);
			break;
		default:
			cout << "Incorrect choice!" << endl;
			break;
		
		}
	} while (option != 0);
	return 0;
}