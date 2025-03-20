#include <stdio.h>

int main(void)
{
	int number;
	int a, b, c, d;
	int x1, x2, x3, x4, x5;

	printf("Enter a 5 digit number: ");
	scanf_s("%d", &number);

	a = number / 10000;
	b = number / 1000;
	c = number / 100;
	d = number / 10;

	x1 = a % 1000;
	x2 = b % 10;
	x3 = c % 10;
	x4 = d % 10;
	x5 = number % 10;

	printf("%d %d %d %d %d\n", x1, x2, x3, x4, x5);



}