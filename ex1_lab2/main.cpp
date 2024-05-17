#include "functii.h"

#define array_dimension 3

int main()
{
	char array_string[256], search_sequence[256];
	int freq = 0, iterator;
	cout << "Enter the searched sequence: ";
	read(search_sequence);
	cout << "Search the sequence " << search_sequence << " in array : " << endl;
	freq = search(search_sequence, array_string, array_dimension);
	if (freq != 0)
	{
		cout << "The sequence " << search_sequence << " appears " << freq << " times";
	}
	else
	{
		cout << "The sequence " << search_sequence << " does not appear in the text!";
	}
	return 0;
}