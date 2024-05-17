#include "Complex.h"
#include <iostream>
#include <math.h>
using namespace std;

Complex::Complex() : real(0), imaginary(0)
{}

Complex::Complex(double real, double imaginary) : real(real), imaginary(imaginary)
{}

Complex& Complex::operator= (const Complex& z)
{
	if (this != &z)
	{
		this->real = z.real;
		this->imaginary = z.imaginary;
	}
	return *this;
}

Complex operator+(const Complex z1, const Complex z2)
{
	Complex result(0, 0);
	result.real = z1.real + z2.real;
	result.imaginary = z1.imaginary + z2.imaginary;
	return result;
}

Complex operator-(const Complex z1, const Complex z2)
{
	Complex result(0, 0);
	result.real = z1.real - z2.real;
	result.imaginary = z1.imaginary - z2.imaginary;
	return result;
}

Complex operator*(const Complex z1, const Complex z2)
{
	Complex result(0, 0);
	result.real = z1.real * z2.real - z1.imaginary * z2.imaginary;
	result.imaginary = z1.real * z2.imaginary + z2.real * z1.imaginary;
	return result;
}

Complex operator/(const Complex z1, const Complex z2)
{
	Complex result(0, 0);
	result.real = (z1.real * z2.real + z1.imaginary * z2.imaginary) / (z2.real * z2.real + z2.imaginary * z2.imaginary);
	result.imaginary = (z2.real * z1.imaginary - z1.real * z2.imaginary) / (z2.real * z2.real + z2.imaginary * z2.imaginary);
	return result;
}

double operator~(const Complex z)
{
	return sqrt(z.real * z.real + z.imaginary * z.imaginary);
}

Complex operator^(const Complex z, int p)
{
	Complex result;
	result = z;
	if (p == 0)
	{
		result.real = 1;
		result.imaginary = 0;
	}
	else
	{
		if (p > 1)
		{
			for (int i = 2; i <= p; i++)
			{
				result = result * z;
			}
		}
	}
	return result;
}

void Complex::print()
{
	if (imaginary >= 0)
	{
		cout << real << "+" << imaginary << "*i" << endl;
	}
	else
	{
		cout << real << imaginary << "*i" << endl;
	}
}

Complex test(int n, Complex v[100])
{
	int i;
	Complex denominator(0, 0);
	Complex numerator(0, 0);
	Complex result(0, 0);
	cout << "Enter the dimension of the array: ";
	cin >> n;
	if (n % 2 != 0)
	{
		return Complex(0,0);
	}
	else
	{
		cout << "Enter the elements of the array: ";
		for (i = 1; i <= n; i++)
		{
			cout << i << " element: ";
			cin >> v[i].real >> v[i].imaginary;
		}
		for (i = 1; i < n; i = i + 2)
		{
			numerator = numerator + (v[i] ^ 3);
		}
		for (i = 2; i <= n; i = i + 2)
		{
			denominator = denominator + (v[i] ^ 4);
		}
		result = numerator / denominator;
		return result;
	}

}