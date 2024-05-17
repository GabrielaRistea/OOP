#include "library.h"
#define MAX 2
int main()
{
	Library library(MAX);
	string searched_title;
	string searched_publishing_house;
	string searched_isbn;
	int option;
	int isbn_validation;
	while (1)
	{
		cout << endl << "Enter 1 for creating the library";
		cout << endl << "Enter 2 for adding a book in the library ";
		cout << endl << "Enter 3 for displaying the library ";
		cout << endl << "Enter 4 for searching a book according to the title ";
		cout << endl << "Enter 5 for searching a book according to the publishing house";
		cout << endl << "Enter 6 for searching a book according to the isbn";
		cout << endl << "Enter 7 to exit";
		cout << endl << "******Enter your choice******" << endl;
		cin >> option;
		cin.get();
		switch (option)
		{
		case 1:
			cout << endl << "\t Create the library:" << endl;
			library.read();
			break;
		case 2:
			cout << endl << "Add book: " << endl;
			library.add_book();
			break;
		case 3:
			cout << endl << "***Display the library***" << endl;
			library.display();
			break;
		case 4:
			cout << "Enter the title of the searched book " << endl;
			getline(cin, searched_title);
			library.search_title(searched_title);
			break;
		case 5:
			cout << "Enter the searched publishing house " << endl;
			getline(cin, searched_publishing_house);
			library.search_publishing_house(searched_publishing_house);
			break;
		case 6:
			cout << "Enter the isbn code: " << endl;
			getline(cin, searched_isbn);
			isbn_validation = library.search_isbn(searched_isbn);
			if (isbn_validation == -1)
			{
				cout << "Valid ISBN! It wasn't found any book with this isbn";
				cout << endl << "Add a book with this isbn in the libray ";
				library.add_book();
			}
			else
			{
				cout << "Invalid ISBN! It already exists a book with this isbn found at position " << isbn_validation;
			}
			break;
		case 7:
			exit(0);
			break;
		default:
			cout << "Incorrect choice!" << endl;
			break;
		}
	}
	return 0;
}