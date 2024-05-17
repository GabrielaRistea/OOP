#pragma once
#include <string>
#include<iostream>
using namespace std;

class Book
{
private:
	string title;
	string author;
	string publishing_house;
	string ISBN;
	int publishing_year;
	float price;


public:
	Book() //Default Constructor
	{
		//cout << "Called Default Constructor " << endl;
		this->title = "";
		this->author = "";
		this->publishing_house = "";
		this->ISBN = "";
		this->publishing_year = 0;
		this->price = 0;
	};

	~Book() //Destructor
	{
		cout << "Called destructor " << endl;
	};

	void read_book_details();
	void display_book_details();
	string get_title();
	string get_publishing_house();
	string getISBN();
	void set_title(string);
	void set_author(string);
	void set_publishing_house(string);
	void set_ISBN(string);
	void set_publishing_year(int);
	void set_price(float);
};

void search_title(Book library[], int dimension, string title);
void search_publishing_house(Book library[], int dimension, string publishing_house);
void search_isbn(Book library[], int dimension, string ISBN);