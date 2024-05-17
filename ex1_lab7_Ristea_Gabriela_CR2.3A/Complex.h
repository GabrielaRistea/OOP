#pragma once
#include <iostream>

class Complex
{
public:
	Complex();
	Complex(double real, double imaginary);
	Complex& operator=(const Complex&);
	friend Complex operator+(const Complex, const Complex);
	friend Complex operator-(const Complex, const Complex);
	friend Complex operator*(const Complex, const Complex);
	friend Complex operator/(const Complex, const Complex);
	friend double operator~(const Complex);
	friend Complex operator^(const Complex, int);
	friend Complex test(int n, Complex v[]);

	void print();
private:
	double real;
	double imaginary;
};

Complex operator+(const Complex, const Complex);
Complex operator-(const Complex, const Complex);
Complex operator*(const Complex, const Complex);
Complex operator/(const Complex, const Complex);
double operator~(const Complex);
Complex operator^(const Complex, int);
Complex test(int n, Complex v[]);