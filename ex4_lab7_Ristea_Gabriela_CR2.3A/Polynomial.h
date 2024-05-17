#pragma once
#include <iostream>
using namespace std;

const int MAX_DEGREE = 100;

class Polynomial
{
public:
	Polynomial();
	Polynomial(int degree, double* coefficients);
	Polynomial& operator= (const Polynomial&);
	friend Polynomial operator+ (const Polynomial, const Polynomial);
	friend Polynomial operator- (const Polynomial, const Polynomial);
	friend Polynomial operator* (const Polynomial, const Polynomial);
	double operator() (double );
	double operator[] (int);
	friend void test();
	void display();
	void set_degree(int degree);
private:
	int degree;
	double coefficients[MAX_DEGREE+1];
};

Polynomial operator+ (const Polynomial, const Polynomial);
Polynomial operator- (const Polynomial, const Polynomial);
Polynomial operator* (const Polynomial, const Polynomial);
Polynomial operator/ (const Polynomial, const Polynomial);
void test();