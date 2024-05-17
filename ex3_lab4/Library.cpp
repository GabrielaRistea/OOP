#include "library.h"

Library::Library(int n)
{
	this->no_books = n;
	this->books = new Book[n];
	int index;
	/*for (index = 0; index < n; index++)
	{
		books[index].set_title("");
		books[index].set_author("");
		books[index].set_publishing_house("");
		books[index].set_ISBN("");
		books[index].set_publishing_year(0);
		books[index].set_price(0.0);
	}*/
}

Library::~Library()
{
	delete[no_books] books;
}

void Library::read()
{
	int index;
	for (index = 0; index < this->no_books; index++)
	{
		this->books[index].read_book_details();
	}
}

void Library::display()
{
	int index;
	for (index = 0; index < this->no_books; index++)
	{
		cout << endl << "Book " << index + 1 << endl;
		this->books[index].display_book_details();
	}
}

void Library::add_book()
{
	Book new_book;
	new_book.read_book_details();
	Library temp = *this;
	books = new Book[this->no_books + 1];
	for (int i = 0; i < temp.no_books; i++)
	{
		this->books[i] = temp.books[i];
	}
	this->books[no_books++] = new_book;
}

void Library::search_title(string title)
{
	bool flag = false;
	int index;
	for (index = 0; index < this->no_books; index++)
	{
		if (this->books[index].get_title() == title)
		{
			cout << "Book " << title << " is in the library at position " << index + 1 << endl;
			this->books[index].display_book_details();
			flag = true;
		}
	}
	if (flag == false)
	{
		cout << "Book " << title << " wasn't found in the library" << endl;
	}
}

void Library::search_publishing_house(string publishing_house)
{
	bool flag = false;
	int index;
	for (index = 0; index < this->no_books; index++)
	{
		if (this->books[index].get_publishing_house() == publishing_house)
		{
			cout << "The book written at the publishin house " << publishing_house  << "is in the library at position " << index + 1 << endl;
			this->books[index].display_book_details();
			flag = true;
		}
	}
	if (flag == false)
	{
		cout << "It wasn't found any book written at the publishing house " << publishing_house << "in the library" << endl;
	}
}

int Library::search_isbn(string ISBN)
{
	bool flag = false;
	int index;
	for (index = 0; index < this->no_books; index++)
	{
		if (this->books[index].getISBN() == ISBN)
		{
			return index + 1; //the position of the book
		}
	}
	return -1;
}