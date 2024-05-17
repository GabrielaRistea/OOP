#include "Book.h"

#define MAX 2
int main()
{
	Book library[MAX];
	string searched_title;
	string searched_publishing_house;
	string searched_isbn;
	int option;
	while (1)
	{
		cout << endl << "Enter 1 for creating the library";
		cout << endl << "Enter 2 for searching a book according to the title ";
		cout << endl << "Enter 3 for searching a book according to the publishing house ";
		cout << endl << "Enter 4 for searching a book according to the isbn ";
		cout << endl << "Enter 5 to exit";
		cout << endl << "******Enter your choice******" << endl;
		cin >> option;
		cin.get();
		switch (option)
		{
		case 1:
			cout << endl << "\t Create the library:" << endl;
			create_library(library, MAX);
			break;
		case 2:
			cout << "Enter the title of the searched book " << endl;
			getline(cin, searched_title);
			cout << "***The book called " << searched_title << " *** " << endl;
			search_title(library, MAX, searched_title);
			break;
		case 3:
			cout << "Enter the searched publishing house: " << endl;
			getline(cin, searched_publishing_house);
			cout << "***The book with the publishing house " << searched_publishing_house << " *** " << endl;
			search_publishing_house(library, MAX, searched_publishing_house);
			break;
		case 4:
			cout << "Enter the isbn code: " << endl;
			getline(cin, searched_isbn);
			cout << "***The book with the isbn " << searched_isbn << " *** " << endl;
			search_isbn(library, MAX, searched_isbn);
			break;
		case 5:
			exit(0);
			break;
		default:
			cout << "Incorrect choice!" << endl;
			break;
		}
	}

	return 0;
}
