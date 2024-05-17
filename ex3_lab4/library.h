#pragma once
#include "Book.h"

class Library 
{
private:
	Book* books;
	int no_books;
public: 
	Library(int); 

	~Library(); //Destructor

	void read();
	void display();
	void add_book();
	void search_title(string);
	void search_publishing_house(string);
	int search_isbn(string);

};