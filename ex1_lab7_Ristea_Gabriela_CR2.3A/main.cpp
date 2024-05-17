#include "Complex.h"
#include <iostream>
using namespace std;

int main()
{
	/*Complex z1;
	z1.print();
	Complex z2(3);
	z2.print();
	Complex z3(2, 3);
	z3.print();
	Complex z4 = z2;
	z4.print();*/
	Complex z;

	Complex z5(2, -5), z6(1, -6);

	double m;

	int nr = 0;
	Complex arr[100];
	Complex result;

	int option;
	while (1)
	{
		cout << endl << "1 Add";
		cout << endl << "2 Subtract";
		cout << endl << "3 Multiply";
		cout << endl << "4 Divide";
		cout << endl << "5 Modul";
		cout << endl << "6 Raise a complex number to a power";
		cout << endl << "7 Calculate z = (z1^3+z3^3+...+z2n-1^3)/(z2^4+z4^4+...+z2n^4)";
		cout << endl << "8 Exit";
		cout << endl << "******Enter your choice******" << endl;
		cin >> option;
		switch (option)
		{
		case 1:
			z = z5 + z6;
			z.print();
			break;
		case 2:
			z = z5 - z6;
			z.print();
			break;
		case 3:
			z = z5 * z6;
			z.print();
			break;
		case 4:
			z = z5 / z6;
			z.print();
			break;
		case 5:
			m = ~z5;
			cout << "Modul z5: " << m << endl;
			break;
		case 6:
			z = z5 ^ 2;
			z.print();
			break;
		case 7:
			result = test(nr, arr); //testat pt 4 nr (1+2i),(1+i),(2+0i),(2+2i)
			result.print();
			break;
		case 8:
			exit(0);
			break;
		default:
			cout << "Incorrect choice!" << endl;
			break;
		}
	}
	return 0;

}