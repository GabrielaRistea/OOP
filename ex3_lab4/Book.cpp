#include "Book.h"

void Book::read_book_details() //function for reading the details about a book
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

void Book::display_book_details() //function for displaying the details of a book
{
	cout << "The title is: " << this->title << endl;
	cout << "The author is: " << this->author << endl;
	cout << "The publishing house is: " << this->publishing_house << endl;
	cout << "ISBN: " << this->ISBN << endl;
	cout << "The publishing year is: " << this->publishing_year << endl;
	cout << "The price is: " << this->price << endl;
}

string Book::get_title()
{
	return this->title;
}

string Book::get_publishing_house()
{
	return this->publishing_house;
}

string Book::getISBN()
{
	return this->ISBN;
}

void Book::set_title(string title)
{
	this->title = title;
}

void Book::set_author(string author)
{
	this->author = author;
}

void Book::set_publishing_house(string publishing_house)
{
	this->publishing_house = publishing_house;
}

void Book::set_ISBN(string ISBN)
{
	this->ISBN = ISBN;
}

void Book::set_publishing_year(int publishing_year)
{
	this->publishing_year = publishing_year;
}

void Book::set_price(float price)
{
	this->price = price;
}