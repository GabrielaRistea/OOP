#include "Polynomial.h"
#include <iostream>
using namespace std;

int main()
{
	double coeffs1[] = { 1, -2, 1 };  // x^2 - 2x + 1
	double coeffs2[] = { 1, 1 }; //x+1
	Polynomial P1(2, coeffs1);
	Polynomial P2(1, coeffs2);
	Polynomial p;
	p = P1 + P2;
	p.display();
	Polynomial result;
	result = P1 - P2;
	result.display();
	Polynomial multiply;
	multiply = P1 * P2;
	multiply.display();
	double x;
	cin >> x;
	cout<<P1(x);
	cout << endl;

	test();

}