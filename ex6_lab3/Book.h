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
	int price;


public:
	Book() //Default Constructor
	{
		cout << "Called Default Constructor " << endl;
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

	void read();
	void display();
	friend void search_title(Book library[], int dimension, string title);
	friend void search_publishing_house(Book library[], int dimension, string publishing_house);
	friend void search_isbn(Book library[], int dimension, string ISBN);


};

void create_library(Book library[], int dimension);
void search_title(Book library[], int dimension, string title);
void search_publishing_house(Book library[], int dimension, string publishing_house);
void search_isbn(Book library[], int dimension, string ISBN);