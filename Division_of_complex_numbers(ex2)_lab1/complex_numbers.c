#include "complex_numbers.h"

//read the complex numbers
void reading(complex *z) {
	float real;
	float imaginary;
	scanf_s("%f %f", &real, &imaginary);
	z->real = real;
	z->imaginary = imaginary;
}

//calculate the conjugate of a complex number
complex conjugate_number(complex z) {
	complex z_conjugate;
	z_conjugate.real = z.real;
	z_conjugate.imaginary = -z.imaginary;
	return z_conjugate;
}

//multiply complex numbers
complex multiplying(complex z1, complex z2) {
	complex result;
	result.real = z1.real * z2.real - z1.imaginary * z2.imaginary;
	result.imaginary = z1.real * z2.imaginary + z1.imaginary * z2.real;
	return result;
}

// division of the complex numbers using multiplying and conjugate_number functions
complex division(complex z1, complex z2) {
	complex result_division;
	complex numerator;
	complex denominator;
	//z1/z2 = z1 * z2_conjugat / z2 * z2_conjugat
	/// z1/z2 = (z1.real*z2.real + z1.imag*z2.imag)/(z2.real*z2.real + z2.imag*z2.imag) + 
	///			+ i*(z2.real*z1.imag - z1.real*z2.imag)/(z2.real*z2.real + z2.imag*z2.imag)
	numerator = multiplying(z1, conjugate_number(z2));
	denominator = multiplying(z2, conjugate_number(z2));
	result_division.real = numerator.real / denominator.real;
	result_division.imaginary = numerator.imaginary / denominator.real;
	return result_division;
}

//display the complex number depending on the imaginary part
void display(complex z) {
	if (z.imaginary == 0) {
		printf_s("%f", z.real);
	}
	else
		if (z.imaginary < 0) {
			printf_s("%f - i*%f", z.real, z.imaginary);
		}
		else
		{
			printf_s("%f + i*%f", z.real, z.imaginary);
		}
}