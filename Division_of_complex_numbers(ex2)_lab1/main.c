#include "complex_numbers.h"

int main()
{
	complex a, b;
	complex result;
	printf_s("Enter the real part and the imaginary part of the first number: ");
	reading(&a);
	printf_s("\nEnter the real part and the imaginary part of the second number: ");
	reading(&b);
	result = division(a, b);
	printf_s("\nThe result of the division of the two numbers is: ");
	display(result);
	return 0;
}
