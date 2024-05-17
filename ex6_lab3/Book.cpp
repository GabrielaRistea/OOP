#include "Book.h"

void Book::read() //function for reading the details about a book
{
	cout << "Enter the title: " << endl;
	getline(cin, this->title);
	cout << "Enter the author: " << endl;
	getline(cin, this->author);
	cout << "Enter the publishing house: " << endl;
	getline(cin, this->publishing_house);
	cout << "Enter ISBN: " << endl;
	getline(cin, this->ISBN);
	cout << "Enter the publishing year: " << endl;
	cin >> this->publishing_year;
	cout << "Enter the price: " << endl;
	cin >> this->price;
	cin.get();
}

void create_library(Book library[], int dimension) //function for creating the library
{
	int index;
	for (index = 0; index < dimension; index++)
	{
		library[index].read();
	}
}

void Book::display() //function for displaying the details of a book
{
	cout << "The title is: " << this->title << endl;
	cout << "The author is: " << this->author << endl;
	cout << "The publishing house is: " << this->publishing_house << endl;
	cout << "ISBN: " << this->ISBN << endl;
	cout << "The publishing year is: " << this->publishing_year << endl;
	cout << "The price is: " << this->price << endl;
}

void search_title(Book library[], int dimension, string title) //function for searching a book according to the title
{
	int index;
	bool flag = false;
	for (index = 0; index < dimension; index++)
	{
		if (library[index].title == title)
		{
			flag = true;
			cout << "\t Book details: " << endl;
			library[index].display();
		}
	}
	if (flag == false)
	{
		cout << "\t The book wasn't found" << endl;
	}
}

void search_publishing_house(Book library[], int dimension, string publishing_house) //function for searching a book according to the publishing house
{
	int index;
	bool flag = false;
	for (index = 0; index < dimension; index++)
	{
		if (library[index].publishing_house == publishing_house)
		{
			flag = true;
			cout << "\t Book details: " << endl;
			library[index].display();
			cout << endl;
		}
	}
	if (flag == false)
	{
		cout << "\t The book wasn't found" << endl;
	}
}

void search_isbn(Book library[], int dimension, string ISBN) ////function for searching a book according to the isbn
{
	int index;
	bool flag = false;
	for (index = 0; index < dimension; index++)
	{
		if (library[index].ISBN == ISBN)
		{
			flag = true;
			cout << "\t Book details: " << endl;
			library[index].display();
			cout << endl;
		}
	}
	if (flag == false)
	{
		cout << "\t The book wasn't found" << endl;
	}
}