#include "Polynomial.h"
#include <iostream>
using namespace std;

Polynomial::Polynomial() : degree(0), coefficients{0}
{}



Polynomial::Polynomial(int degree, double* coefficients) : degree(degree)
{
	if (degree > MAX_DEGREE)
	{
		cout << "Degree exceeds the maximum limit" << endl;
		exit(1);
	}
	for (int i = 0; i <= degree; i++)
	{
		this->coefficients[i] = coefficients[i];
	}
}

void Polynomial::set_degree(int degree)
{
	degree = degree;
}

Polynomial& Polynomial::operator= (const Polynomial& p1)
{
	if (this != &p1) {
		this->degree = p1.degree;
		for (int i = 0; i <= this->degree; ++i) {
			this->coefficients[i] = p1.coefficients[i];
		}
	}
	return *this;
}

Polynomial operator+(const Polynomial p1, const Polynomial p2) 
{
	Polynomial result;
	if (p1.degree > p2.degree)
	{
		result.degree = p1.degree;
	}
	else
	{
		result.degree = p2.degree;
	}

	for (int i = 0; i <= result.degree; i++) {
		if (i <= p1.degree) {
			result.coefficients[i] = p1.coefficients[i];
		}
		else {
			result.coefficients[i] = 0;
		}

		if (i <= p2.degree) {
			result.coefficients[i] += p2.coefficients[i];
		}
		else {
			result.coefficients[i] += 0;
		}
	}
	return result;
}

void Polynomial:: display() {
	for (int i = this->degree; i >= 0; i--) {
		cout << "("<<this->coefficients[i]<<")";
		if (i > 0) 
		{
			cout << "x^" << i << " + ";
		}
	}
	cout << endl;
}

Polynomial operator- (const Polynomial p1, const Polynomial p2)
{
	Polynomial result;
	if (p1.degree > p2.degree)
	{
		result.degree = p1.degree;
	}
	else
	{
		result.degree = p2.degree;
	}
	for (int i = 0; i <= result.degree; i++) 
	{
		if (i <= p1.degree) 
		{
			result.coefficients[i] = p1.coefficients[i];
		}
		else 
		{
			result.coefficients[i] = 0;
		}

		if (i <= p2.degree) 
			if (result.coefficients[i] < 0)
			{
				result.coefficients[i] += p2.coefficients[i];
			}
			else
			{ 
			result.coefficients[i] -= p2.coefficients[i];
			}
		else 
		{
			result.coefficients[i] -= 0;
		}
	}
	return result;
}


Polynomial operator* (const Polynomial p1, const Polynomial p2)
{
	Polynomial result;
	result.degree = p1.degree + p2.degree;
	for (int i = 0; i <= result.degree; i++) 
	{
		result.coefficients[i] = 0;
		for (int j = 0; j <= i; j++) 
		{
			if (j <= p1.degree && (i - j) <= p2.degree) 
			{
				result.coefficients[i] += p1.coefficients[j] * p2.coefficients[i - j];
			}
		}
	}

	return result;
}

double Polynomial::operator() (double x)
{
	double result = 0;
	for (int i = degree; i >= 0; i--)
	{
		result = result * x + coefficients[i];
	}
	return result;
}

double Polynomial::operator[] (int index)
{
	if (index<0 || index>degree)
	{
		cout << "Index out of bounds" << endl;
	}
	return coefficients[index];
}

void test()
{
	double coeffs1[] = { 1, -2, 1 };  // x^2 - 2x + 1
	double coeffs2[] = { 1, 1 };      // x + 1
	double coeffs3[] = { 1, -1 };     // x - 1

	double x = 1;
	Polynomial P1(2, coeffs1);
	Polynomial P2(1, coeffs2);
	Polynomial P3(1, coeffs3);
	double v1 = P1(x) * P1(x) - P2(x) * P3(x);
	cout << P2(x) << endl;
	cout << P3(x) << endl;
	cout << P1(x) * P1(x) << endl;
	cout << P2(x) * P3(x) << endl;
	Polynomial v2 = (P1 * P1) - (P2 * P3);

	
	
	double result_v2 = v2(x);

	cout << "v1(x) = ";
	//cout<<v1;
	cout << "v1(" << x << ") = " << v1 << endl;

	cout << "v2(x) = ";
	//v2.display();
	cout << "v2(" << x << ") = " << result_v2 << endl;

	if (v1 == result_v2) 
	{
		cout << "The two expressions are equal" << endl;
	}
	else
	{
		cout << "The two expressions are not equal" << endl;
	}
}
