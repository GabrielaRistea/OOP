#include "Subscriber.h"

class List
{
public:
	List();
	void add_subscriber(const Subscriber &subscriber1);
	void search_subscriber(string) const;
	void print_number(string) const;
	void print_list();
private:
	Subscriber* first_subscriber;
};
