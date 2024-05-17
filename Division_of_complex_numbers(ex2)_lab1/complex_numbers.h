#include <stdio.h>

typedef struct complex_number {
	float real;
	float imaginary;
} complex;

void reading(complex* z);

complex conjugate_number(complex z);

complex multiplying(complex z1, complex z2);

complex division(complex z1, complex z2);

void display(complex z);
